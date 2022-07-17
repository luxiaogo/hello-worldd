#include<iostream>
#include<algorithm>
using namespace std;
int e[101][101],num[101],low[101],n,m,index=0,root,flag[101];
void dfs(int cur ,int father)
{
    int child=0;
    index++;
    low[cur]=index;
    num[cur]=index;
    for(int i=1;i<n;i++)
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
                else if(cur==root && child>1)
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
    int x,y;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        e[x][y]=1;
        e[y][x]=1;
    }
    root=1
    dfs(1,1);
    for(int i=1;i<=n;i++)
    {
        if(flag[i]==1)
        cout << i << endl;
    }
}