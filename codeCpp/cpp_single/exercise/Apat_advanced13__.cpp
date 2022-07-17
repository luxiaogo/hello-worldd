#include<iostream>
#include<algorithm>
using namespace std;
int e[1001][1001];
bool visit[1001];
int n,m,k;
void dfs(int step)
{
    visit[step]=true;
    for(int i=1;i<=n;i++)
    {
        if(e[step][i]==1 && visit[i]==false)
        dfs(i);
    }
}
int main()
{
    int x,y;
    cin >> n >> m >> k;
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        e[x][y]=1;
        e[y][x]=1;
    }
    for(int i=0;i<k;i++)
    {
        fill(visit,visit+1001,false);
        int temp,cnt=0;
        cin >> temp;
        visit[temp]=true;
        for(int j=1;j<=n;j++)
        {
            if(visit[j]==false)
            {
                dfs(j);
                cnt++;
            }
        }
        cout << cnt-1 << endl;
    }
}