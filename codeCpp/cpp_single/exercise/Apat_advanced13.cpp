#include<iostream>
#include<algorithm>
using namespace std;
int e[1010][1010],n;
bool visit[1010];
void dfs(int cur)
{
    visit[cur]=true;
    for(int i=1;i<=n;i++)
    {
        if(e[cur][i]==1 && visit[i]==false)
        {
            dfs(i);
        }
    }
    return;
}
int main()
{
    int m,p,x,y,a;
    cin >> n >> m >> p;
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        e[x][y]=1;
        e[y][x]=1;
    }
    for(int i=0;i<p;i++)
    {
        int cnt=0;
        cin >> a;
            fill(visit,visit+1010,false);
        visit[a]=true;
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