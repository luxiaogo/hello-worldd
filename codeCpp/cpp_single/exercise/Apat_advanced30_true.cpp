#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int inf=99999999;
vector<int>temppath,path,pre[510];
int n,m,s,d;
int e[510][510],cost[510][510];
int mincost=inf;
void dfs(int v){
    temppath.push_back(v);
    if(v==s){
        int tempcost=0;
        for(int i=1;i<v.size();i++){
            tempcost+=cost[tempcost[i]][tempcost[i-1]];
        }
        if(tempcost<mincost){
            mincost=tempcost;
            path=temppath;
        }
        temppath.pop_back();
        return;
    }
    for(int i=0;i<pre[v].size();i++){
        dfs(pre[v][i]);
    }
}
int main(){
    int x,y,c;
    cin >> n >> m >> s >> d;
    fill(e[0],e[0]+510*510,inf);
    bool visit[510]={false};
    for(int i=0;i<m;i++){
        cin >> x >> y >> c >> o;
        e[x][y]=c;
        e[y][x]=c;
        cost[x][y]=o;
        cost[y][x]=o;
    }
    pre[s].push_back(s);
    int dis[510]={inf};
    dis[s]=0;
    for(int i=0;i<n;i++){
        int min=inf,u=-1;
        for(int j=0;j<n;j++){
            if(visit[j]==false&&dis[j]<min){
                u=j;
                min=dis[j];
            }
        }
        if(u==-1)break;
        visit[u]=true;
        for(int v=0;v<n;v++){
            if(visit[v]==false&&e[u][v]<inf){
                if(dis[v]>dis[u]+e[u][v]){
                    dis[v]=dis[u]+e[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }else if(dis[v]==dis[u]+e[u][v])pre[v].push_back(u);

            }
        }
    }
    dfs(d);
    //printf()
}