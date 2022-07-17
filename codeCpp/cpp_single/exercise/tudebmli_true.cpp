#include<iostream>
using namespace std;
int book[101],sum,n,e[101][101];
void dfs(int cur)
{
    int i;
    cout << cur << " ";
    sum++;
    if(sum==n)
    return;
    for(i=1;i<=n;i++)
    if(e[cur][i]==1 && book[i]==0)
    {
        book[i]=1;
        dfs(i);
    }
    return;
}
void dfss(int cur)
{
    int i;
    cout << cur << " ";
    sum++;
    if(sum==n)
    return;
    for(i=1;i<=n;i++)
    {
        if(a[cur][i]==1 && book[i]==0)
        book[i]=1;
        dfs(i);
    }
    return;
}

int main()
{
    int m,a,b;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(i==j) e[i][j]=0;
    else e[i][j]=9999999;
    for(int i=1;i<=m;i++)
    {
        cin >> a >> b;
        e[a][b]=1;
        e[b][a]=1;
    }
    book[1]=1;
    dfs(1);
}