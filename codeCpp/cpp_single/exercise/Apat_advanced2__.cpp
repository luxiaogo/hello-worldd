#include<iostream>
#include<algorithm>
using namespace std;
int w[510],num[510],weight[510],dis[510],e[510][510];
int inf=99999;
bool visit[510];
int main()
{
    int n,m,c1,c2,x,y,z;
    cin >> n >> m >> c1 >> c2;
    for(int i=0;i<n;i++)
    cin >> weight[i];
    fill(e[0],e[0]+510*510,inf);
    fill(dis,dis+510,inf);        //dis[0]只要写成dis就可以了
    for(int i=0;i<m;i++)
    {
        cin >> x >> y >> z;
        e[x][y]=e[y][x]=z;
    }
    dis[c1]=0;
    w[c1]=weight[c1];
    num[c1]=1;
    for(int i=0;i<n-1;i++)
    {
        int u=-1,minn=inf;
        for(int j=0;j<n;j++)
        {
            if(visit[j]==false && dis[j]<minn)
            {
                u=j;
                minn=dis[j];
            }
        }
        if(u==-1)
        break;
        visit[u]=true;
        for(int v=0;v<0;v++)
        {
            if(e[u][v]<inf && visit[v]==false)
            {
                if(dis[v]>e[u][v]+dis[u])
                {
                    dis[v]=e[u][v]+dis[u];
                    num[v]=num[u];
                    w[v]=w[u]+weight[v];
                }else if(dis[v]==e[u][v]+dis[u])
                {
                    num[v]=num[v]+num[u];
                    if(w[u]+weight[v]>w[v])
                    w[v]=w[u]+weight[u];
                }
            }
        }
    }
    cout << num[c2] << " " << w[c2];
}