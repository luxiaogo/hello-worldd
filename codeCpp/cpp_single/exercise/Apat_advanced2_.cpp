#include<iostream>
#include<queue>
using namespace std;
int n,m,c2,c1,u;
int inf=99999;
int mini=inf;
int e[n][n],book[n]={0};
int dis[n]={inf};
int hum[n],step;
int s;
int max=0;
int bookk[100];
class note
{
    public:
    note(int cit_,int num_)
    {
        this->cit=cit_;
        this->num=num_;
    }
    int cit;int num;
};
void dfs(int step)
{
    if(step>c2)
    {
        if(s>max)
        max=s;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(e[step][i]<inf && bookk[i]==0)
        {
            s += hum[i];
            bookk[i]=1;
            dfs(step+1);
            bookk[i]=0;
        }
    }
    return;
}
int main()
{
    s=hum[c1];
    cin >> n >> m >> c1 >> c2;
    for(int i=0;i<=n-1;i++)
    {
        cin >> hum[i];
    } 
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(i==j)
        e[i][j]=0;
        else
        e[i][j]=inf;
    }
    for(int i=0;i<m;i++)
    {
        int num,a,b;
        cin >> a >> b >> num;
        e[a][b]=num;
    }
    book[c1]=1;
    for(int i=0;i<n;i++)
    {
        dis[i]=e[c1][i];
    }
    for(int i=0;i<n-1;i++)
    {
        mini=inf;
        for(int j=0;j<=n-1;j++)
        {
            if(book[j]==0 && dis[j]<mini)
            {
                mini=dis[j];
                u=j;
            }
        }
        book[u]=1;
        for(int v=0;v<=n-1;v++)
        {
            if(e[u][v]<inf)
            {
                if(e[u][v]+dis[u]<dis[v])
                dis[v]=e[u][v]+dis[u];
            }
        }
    }
    queue<note>que;
    note p1(c1,hum[c1]);
    int x=c1;
    que.push(p1);
    bookk[c1]=1;
    /*while(!que.empty())
    {
        for(int i=0;i<n;i++)
        {
            if(e[que.front().num][i]<inf && bookk[i]==0)
            {
                s += hum[i];
                x  = i;
                if(i==c2)
                {
                    if(s>max)
                    max=s;
                    continue;
                }
                bookk[i]=1;
                note p2(x,s);
                que.push(p2);
            }
        }
        que.pop();
    }*/
    cout << " " << dis[c2];
    cout << " " << max;
}
