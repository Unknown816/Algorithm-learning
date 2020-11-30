#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN=10005;

struct Stick{
    int l;
    int w;
}s[MAXN];
bool cmp(Stick x1,Stick x2){
    if(x1.l==x2.l){
        return x1.w<x2.w;
    }else return x1.l<x2.l;
}

int main() {
    int n,t;
    cin>>t;
    int len[MAXN];
    while(t--){
        memset(len,0,sizeof(len));
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>s[i].l>>s[i].w;
        }
        sort(s+1,s+n+1,cmp);
        //转化为求包含几个最长上升子序列
        int cnt=0,ans=0;
        while(cnt<n){
            ans++;
            int maxl=0;
            for(int i=1;i<=n;i++){
                if(s[i].w==0)continue;
                if(len[maxl]<=s[i].w){
                    len[++maxl]=s[i].w;
                    cnt++;
                    s[i].w=0;
                }else{
                    int flag=lower_bound(len,len+1+n,s[i].w)-len;
                    len[flag]=s[i].w;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
