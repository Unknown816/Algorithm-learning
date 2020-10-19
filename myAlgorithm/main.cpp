#include <iostream>
using namespace std;
void Merge(int a[],int low,int mid,int high){
    int *tmpa;
    int i=low,j=mid+1,k=0;
    tmpa=(int *)malloc((high-low+1)*sizeof(int));
    while(i<=mid&&j<=high){
        if(a[i]<=a[j]){
            tmpa[k]=a[i];
            i++;k++;
        }else{
            tmpa[k]=a[j];
            j++;k++;
        }
    }
    while(i<=mid){
        tmpa[k]=a[i];
        i++;k++;
    }
    while(j<=high){
        tmpa[k]=a[j];
        j++;k++;
    }
    for(k=0,i=low;i<=high;k++,i++){
        a[i]=tmpa[k];
    }
    free(tmpa);
}
void MergeSort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}

int BinSearch(int a[],int low,int high,int k){
    int mid;
    if(low<=high){
        mid=(low+high)/2;
        if(a[mid]==k){
            return mid;
        }
        if(a[mid]>k){
            return BinSearch(a,low,mid-1,k);
        }else{
            if(mid==low&&abs(high-low)==1)return -1;
            if(a[high]==k)return high;
            else return BinSearch(a,mid,high,k);
        }
    }else return -1;
}
int main() {
    int n,c,a[100005],cnt=0;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    MergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        if(BinSearch(a,0,n-1,a[i]+c)!=-1)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
