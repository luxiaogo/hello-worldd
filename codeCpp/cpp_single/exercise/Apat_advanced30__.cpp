#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int inf=9999999;
vector<int>pre[510];
int e[501][501],dis[501],cost[501][501];
bool visit[501]={false};
int n,m,s,d;
vector<int>temppath,path;
int mincost=inf;
void dfs(int v)
{
    temppath.push_back(v);                 //用一个temppath来储存路径
    if(v==s)
    {
        int tempcost=0;
        for(int i=temppath.size()-1;i>0;i--)
        {
            tempcost += cost[temppath[i]][temppath[i-1]];
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
}
int main()
{
    int x,y,a,b;
    cin >> n >> m >> s >> d;
    fill(dis,dis+501,inf);
    fill(e[0],e[0]+510*510,inf);
    for(int i=0;i<m;i++)
    {   
        cin >> x >> y >> a >> b;
        e[x][y]=a;
        e[y][x]=a;
        cost[x][y]=b;
        cost[y][x]=b;
    }
    dis[s]=0;
    pre[s].push_back(s);
    for(int i=0;i<m;i++)      //n or m?
    {
        int minn=inf,u=-1;
        for(int j=0;j<n;j++)
        {
            if(visit[j]==false && dis[j]<minn)
            {
                minn=dis[j];
                u=j;
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