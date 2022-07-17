#include<iostream>
using namespace std;
#include<algorithm>
int e[100][100],flag[9],num[100],low[100],root,index,n;
void dfs(int cur ,int father)
{
    int child=0;
    index++;                
    num[cur]=index;
    low[cur]=index;
    for(int i=0;i<n;i++)
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
                flag[cur]==1;
            }
            else if(i!=father)
            {
                low[cur]=min(num[i],low[cur]);
            }
        }
    }
    return;
}
int main()
{
    int m,x,y;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        e[i][j]=0;
    }
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        e[x][y]=1;
        e[y][x]=1;
    }
    root=1;
    dfs(1,root);
    for(int i=0;i<n;i++)
    {
        if(flag[i]==1)
        cout << i << " ";
    }
}