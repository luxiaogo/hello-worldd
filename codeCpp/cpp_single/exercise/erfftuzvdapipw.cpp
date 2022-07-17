#include<iostream>
using namespace std;
int e[101][101];
int n,m;
int book[101];
int match[101];
int dfs(int cur)
{
    for(int i=1;i<=n;i++)
    {
        if(book[i]==0 && e[cur][i]==1)
        {
            book[i]=1;
            if(match[i]==0 || dfs(i))
            {
                match[i]=cur;
                match[cur]=i;
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int x,y,sum;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
        e[i][j]=0;
    }
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        e[x][y]=1;
        e[y][x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        book[j]=0;
        if(dfs(i))
        sum++;
    }
    cout << sum;
}