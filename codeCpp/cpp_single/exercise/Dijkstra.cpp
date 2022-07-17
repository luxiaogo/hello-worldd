#include<iostream>
using namespace std;
int main()
{
    int e[11][11],x,y,w,n,m,inf=99999,u,v,dis[11][11];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
        e[i][j]=0;
    }
    for(int i=1;i<=m;i++)
    {
        cin >> x >> y >> w;
        e[x][y]=w;
    }
    for(int i=1;i<=n;i++)
    dis[i]=e[i][j];
    for(int i=1;i<=n;i++)
    book[i]=0;
    book[1]=1
    for(int i=1;i<=n-1;i++)
    {
        min=inf;
        for(int i=1;i<=n;i++)
        {
            if(book[i]==0 && dis[i]<min)
            {
                min=dis[i];
                u=i;
            }
        }
        book[u]=1;
        for(v=1;v<=n;v++)
        {
            if(e[u][v]<inf)
            {
                if(dis[v]>dis[u]+e[u][v])
                dis[v]=dis[u]+e[u][v];
            }
        }
    }
}