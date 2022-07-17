#include<iostream>
#include<algorithm>
using namespace std;
void dfs()
{

}
int main()
{
    int n,m,c1,c2,inf=99999999,tx,ty,a,b;
    cin >> n >> m >> c1 >> c2;
    int dis[n+1]={0},e[n+1][n+1],c[n+1][n+1],cdis[n+1];
    bool book[n+1]={false},cbook[n+1]={false};
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        c[i][j]=inf;
        e[i][j]=inf;
        if(i==j)e[i][j]=0;
        if(i==j)c[i][j]=0;
    }
    for(int i=0;i<m;i++)
    {
        cin >> tx >> ty >> a >> b;
        e[tx][ty]=a;
        e[ty][tx]=a;
        c[tx][ty]=b;
        c[ty][tx]=b;
    }
    book[c1]=true;
    cbook[c1]=true;
    int u;
    fill(dis,dis+n,inf);
    fill(cdis,dis+n,inf);
    dis[c1]=0;
    cdis[c1]=0;
    for(int i=0;i<m-1;i++)
    {
        int min=inf;
        for(int j=0;j<n;j++)
        {
            if(book[j]=false && dis[j]<min)
            {
                min=dis[j];
                u=j;
            }
        }
        book[u]=true;
        for(int v=0;v<n;v++)
        {
            if(e[u][v]<inf)
            {
                if(dis[v]>e[u][v]+dis[u])
                {
                    dis[v]=e[u][v]+dis[u]
                    cdis[v]=c[u][v]+cdis[u];
                }
            }
        }
    }
}