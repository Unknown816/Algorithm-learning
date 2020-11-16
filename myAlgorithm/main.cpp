#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAXN 205
int a[MAXN];//={1,3,8,5,11};
int b[MAXN];//={0,0,0,0};
int main() {
    int n,m;//5,3
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        b[i]=a[i+1]-a[i];
    }
    sort(b,b+n-1);
    int sum=a[n-1]-a[0]+1,j=n-2;
    for(int i=0;i<m-1;i++){
        sum-=b[j--]-1;
    }
    cout<<sum<<endl;
    return 0;
}
