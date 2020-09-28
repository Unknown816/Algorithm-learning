#include <iostream>
using namespace std;

int MergeFind(int a[],int low,int mid,int high){
    int i=low,j=mid+1;
    if(a[i]==a[j])return a[j];
}
int MergeZhongshu(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeZhongshu(a,low,mid);
        MergeZhongshu(a,mid+1,high);
        return MergeFind(a,low,mid,high);
    }
}
int main() {
    int a[]={1,2,2,3,3,3,5};
    cout<<MergeZhongshu(a,0,6)<<endl;
    return 0;
}
