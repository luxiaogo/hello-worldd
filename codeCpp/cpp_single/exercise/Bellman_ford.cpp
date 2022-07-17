#include<iostream>
using namespace std;
int main()
{
    int u[10],v[10],w[10],n,m,dis[10];
    int inf=99999999;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    dis[i]=inf;
    dis[1]=0;
    for(int i=1;i<=m;i++)
    {
        cin >> v[i] >> u[i] >> w[i];
    }
    for(int j=1;j<=m-1;j++)
    {
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            if(dis[u[i]]>dis[v[i]]+w[i])
            {
                dis[u[i]]=dis[v[i]]+w[i];
                flag=1;
            }
        }
    if(flag==0)
    break;
    }
    int check=0;
    for(int i=1;i<=n;i++)
    if(dis[u[i]]>dis[v[i]]+w[i])
    check=1;
    else
    for(int j=1;j<=n;j++)
    cout << dis[i];
    if(check==1)
    cout << "有负权回路";
}