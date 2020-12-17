#include<iostream>
#include<cstring>
#include<algorithm>

const int INF = 0x3f3f3f3f;
#define mem(a, b) memset(a,b,sizeof(a))
using namespace std;
const int maxn = 101;
int N, M, d[maxn][maxn];

void floyd() {
    for (int k = 1; k <= N; k++)//经过不大于k点的最短路径
        for (int v = 1; v <= N; v++)
            for (int u = 1; u <= N; u++)
                d[v][u] = min(d[v][u], d[v][k] + d[k][u]);
}

int main() {
    while (cin >> N >> M) {
        mem(d, 0x3f);//初始化
        for (int v = 1; v <= M; v++) {
            int c, u, time;;
            cin >> c >> u >> time;
            d[c + 1][u + 1] = d[u + 1][c + 1] = time;
        }
        for (int i = 1; i <= N; i++) {
            d[i][i] = 0;//到自身为0
        }
        floyd();
        //求出以各点为源点的最大用时的最小值
        int minTime = INF, start = 0;
        for (int i = 1; i <= N; i++) {
            int sum = 0;
            for (int j = 1; j <= N; j++)
                sum = max(sum, d[i][j]);//i传播信息给其他人的最长时间
            if (minTime > sum) {
                minTime = sum;
                start = i;
            }
        }
        if (start == 0) printf("disjoint\n");
        else printf("%d\n", start-1);
    }
    return 0;
}