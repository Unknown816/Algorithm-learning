#include <iostream>
#include <queue>
using namespace std;
#define MAXN 20
#define INF 0x3f3f3f3f
int n=5,W=10;
int w[]={0,5,2,6,4,3};
int bestx[MAXN];   //最优解
int total=1;
int maxw=-9999;
int minc=6;
struct NodeType{
    int no;   //结点编号
    int i;   //当前结点在搜索空间中的层次
    int w;
    int x[MAXN];

    double ub;   //上界
    bool operator<(const NodeType &s) const{   //重载<关系函数
        return ub<s.ub;   //ub越大越优先出局
    }
};
void bound(NodeType &e){   //计算结点上界
    int i=e.i+1;
    int sumw=e.w;
    while((sumw+w[i]<=W)&&i<=n){
        sumw+=w[i];
        i++;
    }
    e.ub=sumw;
}
void EnQueue(NodeType e,priority_queue<NodeType> &qu){
    if(e.i==n){
        int cnt=0;
        for(int j=1;j<n;j++){
            if(e.x[j])cnt++;
        }
        if(e.w>maxw&&cnt<minc){
            maxw=e.w;
            for(int j=1;j<n;j++){
                bestx[j]=e.x[j];
            }
        }
    }else{
        qu.push(e);
    }
}
void bfs(){
    int j;
    NodeType e{},e1{},e2{};
    priority_queue<NodeType> qu;
    e.i=0;
    e.w=0;
    e.no=total++;
    for(j=1;j<=n;j++){
        e.x[j]=0;
    }
    bound(e);
    qu.push(e);   //根结点进队
    while(!qu.empty()){
        e=qu.top();
        qu.pop();
        if(e.w+w[e.i+1]<=W){   //检查左孩子结点
            e1.no=total++;
            e1.i=e.i+1;
            e1.w=e.w+w[e1.i];
            for(j=1;j<=n;j++){
                e1.x[j]=e.x[j];
            }
            e1.x[e1.i]=1;
            bound(e1);
            EnQueue(e1,qu);   //左孩子进队
        }
        e2.no=total++;
        e2.i=e.i+1;
        e2.w=e.w;
        for(j=1;j<=n;j++){
            e2.x[j]=e.x[j];
        }
        e2.x[e2.i]=0;
        bound(e2);
        if(e2.ub>=maxw)
            //cout<<e2.ub<<endl;
            EnQueue(e2,qu);   //右孩子进队
    }
}

int main() {
    bfs();
    for(int i=1;i<=n;i++){
        cout<<bestx[i]<<" ";
    }cout<<endl;
    return 0;
}
