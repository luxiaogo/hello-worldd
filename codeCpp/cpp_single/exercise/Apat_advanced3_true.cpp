#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m,s,d;
vector<int>pre[501],temppath,path;
const int inf=99999999;
int e[501][501],handnumber,maxhandnumber=0,hand[501],minroadnum[501];
void dfs(int step){
    temppath.push_back(step);
    if(step==s){
        for(int i=0;i<temppath.size();i++){
            handnumber+=hand[i];
        }
        if(handnumber>maxhandnumber){
            maxhandnumber=handnumber;
            path=temppath;
        }
        temppath.pop_back();
    }
    for(int i=0;i<pre[step].size();i++){
        dfs(pre[step][i]);
    }
}
int main(){
    int x,y,num;
    cin >> n >> m >> s >> d;
    fill(e[0],e[0]+501*501,inf);
    fill(hand,hand+501,inf);
    for(int i=0;i<n;i++)
    cin >> hand[i];
    for(int i=0;i<m;i++){
        cin >> x >> y >> num;
        e[x][y]=num;
        e[y][x]=num;
    }
    pre[s].push_back(s);
    int dis[501];
    bool visit[501]={false};
    visit[s]=true;
    dis[s]=0;
    fill(dis,dis+501,inf);
    for(int i=0;i<m;i++){
        int u=-1,min=inf;
        for(int j=0;j<n;j++){
            if(dis[i]<min && visit[j]==false){
                u=j;
                min=dis[j];
            }
        }
        if(u==-1)break;
        visit[u]=true;
        for(int v=0;v<n;v++){
            if(e[v][u]<inf && visit[v]==false){        //忘了，再想想
                if(e[u][v]+dis[u]<dis[v]){
                    dis[v]=e[u][v]+dis[u];
                    pre[v].clear();
                    pre[v].push_back(u);
                    minroadnum[v]++;
                }else if(e[u][v]+dis[u]==dis[v]){
                    pre[v].push_back(u);
                    minroadnum[v]++;
                }
            }
        }
    }
    dfs(d);
    cout << minroadnum[d] << " " << maxhandnumber;
}