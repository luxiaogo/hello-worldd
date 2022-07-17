#include<iostream>
using namespace std;
int n,mini=9999,book[101],e[101][101];
void dfs(int cur,int sum)
{
    if(sum>mini)
    return;
    if(cur==n)
    mini=sum;
    if(book[i]==1)
    return;
    if(a[cur][i]==0 || a[cur][i]>9999)
    return;
    for(int i=1;i<=n;i++)
    {
        book[i]=1;
        dfs(i,sum+a[cur][i]);             //记得使book重新为零。
        book[i]=0;
    }
    rerturn;
}
int main()
{
    int a,b,m,c;
    cin >> n >>m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(j==i)e[i][j]==0;
    else e[i][j]=999990;
    for(int i=0;i<m;i++)
    cin >> a >> b >> c;
    e[a][b]=c;
    for(int i=1;i<=n;i++)
    for(int j=1;i<=n;j++)
    for(int k=1;k<=n;k++)
    if(e[i][j]>e[i][k]+e[k][j])
    e[i][j]=e[i][k]+e[k][j];
    book[1]=1;
    dfs(1,0)
    cout << mini;
}