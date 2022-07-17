#include<iostream>
using namespace std;
int main()
{
    int n,m,c1,c2;
    cin >> n >> m >> c1 >> c2;
    int inf=99999;
    int dis[n]={0},num[n]={0},book[n]={0},weight[n]={0},w[n]={0},e[n][n]={inf};
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(i==j)
        e[i][j]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin >> weight[n];
    }
    int a,b,c;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        cin >> a >> b >> c;
        e[a][b]=c;
        e[b][a]=c;
    }
    book[c1]=1;
    w[c1]=weight[c1];
    int min=inf;
    int u,v;
    for(int i=0;i<=n-2;i++)
    {
        min=inf;
        for(int j=0;j<n;j++)
        {
            if(dis[j]<min && book[j]==0)
            {
                min=dis[j];
                u=j;
            }
        }
        book[u]=0;
        for(v=0;v<n;v++)
        {
            if(dis[u]+e[u][v]<dis[v])
        }
    }
}