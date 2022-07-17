#include<iostream>
using namespace std;
int n,m,root,e[9][9];
int flag[9],low[9],num[9],index,child;       //运行不出来
int min(int x,int y)
{
    return x<y?x:y;
}
void dfs(int cur,int father)
{
    child=0;
    index++;
    num[cur]=index;
    low[cur]=index;
    for(int i=1;i<=n;i++)
    {
        if(e[cur][i]==1)
        {
            if(num[i]==0)
            {
                child++;
                dfs(i,cur);
                low[cur]=min(low[cur],low[i]);
                if(cur!=root && low[i]>=num[cur])
                flag[cur]=1;
                if(cur==root && child>1)
                flag[cur]=1;
            }
            else if(i!=father)
            low[cur]=min(low[cur],num[i]);
        }
    }
    return;
}
    int main()
    {
        int n,m,x,y;
        cin >> n >> m;
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        e[i][j]=0;
        for(int i=0;i<m;i++)
        {
            cin >> x >> y;
            e[x][y]=1;
            e[y][x]=1;
        }
        root=1;
        dfs(1,1);
        for(int i=1;i<=n;i++)
        {if(flag[i]==1)
        cout << i;}
    }