#include <iostream>
using namespace std;

int Merge(int a[],int low,int mid,int high){
    int *tmpa;
    int pairs=0;
    int i=low,j=mid+1,k=0;
    tmpa=(int *)malloc((high-low+1)*sizeof(int));
    while(i<=mid&&j<=high){
        if(a[i]<=a[j]){
            tmpa[k]=a[i];
            i++;k++;
        }else{
            tmpa[k]=a[j];
            j++;k++;
            pairs+=mid-i+1;
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
    for(k=0,i=low;i<high;k++,i++){
        a[i]=tmpa[k];
    }
    free(tmpa);
    return pairs;
}
int MergeSort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(a,low,mid);
        int hcnt=MergeSort(a,mid+1,high);
        Merge(a,low,mid,high);
        return hcnt;
    }
}

int main() {
    int a[]={5,1,4,2,9};
    cout<<MergeSort(a,0,4)<<endl;
    return 0;
}
