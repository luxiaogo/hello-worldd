#include<iostream>
using namespace std;
int e[101][101],book[101];sum,mini,n;
void dfs(int cur)
{
    if(sum>mini)
    return;
    if(cur==n)
    mini=sum;
    for(int i=1;i<=n;i++)
    {
        if(e[cur][i]>0 && e[cur][i]<100 && book[i]==1)
        {
            book[i]=1;
            sum += e[cur][i];
            dfs(i);
            book[i]=0;
        }
    }
    return;
}
int main()
{
    int a,b,m,x;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(i==j) e[i][j]=0;
    else e[i][j]=99999;
    for(int i=0;i<m;i++)
    {
        cin >> a >> b >> x;
        e[a][b]=x;
    }
    book[1]=1;
    dfs(1);
    cout << mini;
}