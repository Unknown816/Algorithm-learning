#include <iostream>
using namespace std;
int a[50];

void f(int n,int r,int m){
    if(n<r)return;
    if(r==0){
        for(int i=0;i<m;i++){
            cout<<a[i];
        }cout<<endl;
    }else{
        a[m]=n;
        f(n-1,r-1,m+1);
        f(n-1,r,m);
    }
}

int main() {
    int n,r;
    cin>>n>>r;
    f(n,r,0);
    return 0;
}
