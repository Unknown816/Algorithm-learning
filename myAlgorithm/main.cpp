#include <iostream>
using namespace std;

int toutouzi(int x){
    if(x<0)return 0;
    else if(x==0)return 1;
    return toutouzi(x-1)+toutouzi(x-2)+toutouzi(x-3)+toutouzi(x-4)+toutouzi(x-5)+toutouzi(x-6);
}
int main() {
    int n;
    cin>>n;
    cout<<toutouzi(n)<<endl;
    return 0;
}
