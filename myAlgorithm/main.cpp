#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
#define MaxN 10
int n,m;
const int dx[4]={1,-1,0,0};
const int dy[4]={0,0,1,-1};
void solve(vector<vector<char>>& map){
    if(n==0)return;
    queue<pair<int,int>>que;
    for(int i=0;i<n;i++){
        if(map[i][0]=='O')que.emplace(i,0);
        if(map[i][m-1]=='O')que.emplace(i,m-1);
    }
    for(int i=0;i<m;i++){
        if(map[0][i]=='O')que.emplace(0,i);
        if(map[n-1][i]=='O')que.emplace(n-1,i);
    }
    while(!que.empty()){
        int x=que.front().first,y=que.front().second;
        que.pop();
        map[x][y]='A';
        for(int i=0;i<4;i++){
            int mx=x+dx[i],my=y+dy[i];
            if(mx<0||mx>=n||my<0||my>=m||map[mx][my]!='O')continue;
            que.emplace(mx,my);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(map[i][j]=='A')map[i][j]='O';
                else if(map[i][j]=='O')map[i][j]='X';
            }
        }
    }
}
int main() {
    n=4;
    m=4;
    //cin>>n>>m;
    char a[MaxN][MaxN]={
            {'X','X','X','X'},
            {'X','O','O','X'},
            {'X','X','O','X'},
            {'X','O','X','X'}
    };
    vector<vector<char>> map(MaxN,vector<char>(MaxN));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //cin>>a[i][j];
            map[i][j]=a[i][j];
        }
    }
    solve(map);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<map[i][j];
        }cout<<endl;
    }
    return 0;
}
