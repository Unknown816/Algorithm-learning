#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    map<int,int> m;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
        cout<<m[x];
        if(i<n-1)cout<<' ';
        else cout<<endl;
    }
    return 0;
}
