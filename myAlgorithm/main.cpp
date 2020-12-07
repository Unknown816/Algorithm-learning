#include <iostream>
#include <algorithm>
using namespace std;
const int N = 100;
double D[N];//={1,2,5,3,6,1};//6段，6个点

void preprocess(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>D[i];
    }
}

double Distance(int i,int j){
    double d1=0,d2=0;
    if(i>j){
        int t=i;
        i=j;
        j=t;
    }
    for(int x=i;x<j;x++)d1+=D[x];
    for(int x=0;x<i;x++)d2+=D[x];
    for(int x=j;;x++){
        if(D[x]==0)break;
        d2+=D[x];
    }
    return min(d1,d2);
}

int main() {
    preprocess();
    int t;
    cin>>t;
    while(t--){
        int i,j;
        cin>>i>>j;
        cout<<Distance(i,j)<<endl;
    }
    return 0;
}
