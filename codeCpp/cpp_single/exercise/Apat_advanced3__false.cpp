#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int inf=99999999;
vector<int>temppath,path,pre[510];
bool visit[510]={false};
int n,m,s,d;
int maxhands=0,hands,e[510][510],hand[510],dis[510],num[510];
void dfs(int v)
{
    temppath.push_back(v);
    if(v==s){
        hands=0;
        for(int i=0;i<temppath.size();i++){
            hands+=hand[temppath[i]];
        }
        if(hands>maxhands){
            maxhands=hands;
            path=temppath;
        }
        temppath.pop_back();
        return;
    }
    for(int i=0;i<pre[v].size();i++){
        dfs(pre[v][i]);
    }
    temppath.pop_back();
}
int main(){
    int x,y,z;
    cin >> n >> m >> s >> d;
    fill(dis,dis+510,inf);
    fill(e[0],e[0]+510*510,inf);
    for(int i=0;i<n;i++){
        cin >> hand[i];
    }
    for(int i=0;i<m;i++){
        cin >> x >> y >> z;
        e[x][y]=z;
        e[y][x]=z;
    }
    dis[s]=0;
    pre[s].push_back(s);
    for(int i=0;i<m;i++){                          //不要把visit给初始化
        int u=-1,min=inf;
        for(int j=0;j<n;j++){
            if(dis[j]<min && visit[j]==false){
                min=dis[j];
                u=j;
            }
        }
        if(u==-1)break;
        visit[u]=true;
        for(int v=0;v<n;v++){
            if(e[u][v]<inf && visit[v]==false){
                if(e[u][v]+dis[u]<dis[v]){
                    dis[v]=e[u][v]+dis[u];
                    pre[v].clear();
                    pre[v].push_back(u);
                    num[v]++;
                }else if(e[u][v]+dis[u]==dis[v]){
                    pre[v].push_back(u);
                    num[v]++;
                }
            }
        }
    }
    dfs(d);
    cout << num[d] << " " << maxhands;
}

