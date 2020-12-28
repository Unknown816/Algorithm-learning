#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
const int inf = 0x3f3f3f3f;
int n, m;
int map[500][500];
int vis[500];

int dfs(int s, int t, int f) {
    if (s == t)return f;
    vis[s] = 1;
    for (int i = 1; i <= n; i++) {
        if (map[s][i] > 0 && !vis[i]) {
            vis[i] = 1;
            int d = dfs(i, t, min(f, map[s][i]));
            if (d > 0) {
                map[s][i] -= d;
                map[i][s] += d;
                return d;
            }
        }
    }
    return 0;  //很重要
}

int max_flow(int s, int t) {
    int flow = 0;
    while (1) {
        memset(vis, 0, sizeof(vis));
        int f = dfs(s, t, inf);//不断找从s到t的增广路
        if (f == 0) {
            return flow;   //找不到了就回去
        }
        flow += f;  //找到一个流量f的路
    }
}

int main() {
    while (cin >> n >> m) {
        int u, v, w;
        memset(map, 0, sizeof(map));
        for (int i = 0; i < m; i++) {
            cin >> u >> v >> w;
            map[u+1][v+1] += w;
        }
        cout << max_flow(1, n) << endl;
    }
}