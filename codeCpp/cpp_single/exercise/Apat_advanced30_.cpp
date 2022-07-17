#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m,s,d;
bool visit[510]={false};
int e[510][510],cost[510][510],dis[510];
vector<int>pre[510];
const int inf=99999999;
vector<int>path,temppath;
int mincost=inf;
void dfs(int v)
{
    temppath.push_back(v);
    if(v==s)
    {
        int tempcost=0;
        for(int i=temppath.size()-1;i>0;i--)
        {
            tempcost+=cost[temppath[i]][temppath[i-1]];
        }
        if(tempcost<mincost)
        {
            mincost=tempcost;
            path=temppath;
        }
        temppath.pop_back();
        return;
    }
    for(int i=0;i<pre[v].size();i++)
    {
        dfs(pre[v][i]);
    }
    temppath.pop_back();
    return;/////
}
int main()
{
    cin >> n >> m >> s >> d;
    int tx,ty,a,b;
    fill(dis,dis+510,inf);
    fill(e,e+510*510,inf);
    for(int i=0;i<m;i++)
    {
        cin >> tx >> ty >> a >> b;
        e[tx][ty]=a;
        e[ty][tx]=a;
        cost[tx][ty]=b;
        cost[ty][tx]=b;
    }
    dis[s]=0;
    visit[s]=true;
    pre[s].push_back(s);/////////////////
    for(int i=0;i<m;i++)
    {
        int u=-1,min=inf;
        for(int j=0;j<n;j++)
        {
            if(visit[j]==false && dis[j]<min)
            {
                u=j;
                min=dis[j];
            }
        }
        if(u==-1)break;
        visit[u]=true;
        for(int v=0;v<n;v++)
        {
            if(e[u][v]!=inf && visit[v]==false)
            {
                if(dis[v]>dis[u]+e[u][v])
                {
                    dis[v]=dis[u]+e[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }else if(dis[v]==dis[u]+e[u][v])pre[v].push_back(u);
            }
        }
    }
    dfs(d);
    for(int i=path.size()-1;i>=0;i--)
    {
        cout << path[i] << " ";
    }
    cout << dis[d] << " " << mincost;
}