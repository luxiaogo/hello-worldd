#include<iostream>
using namespace std;
#include<queue>
class node
{
    public:
    node(int x,int y,int s)
    {
        this->m_x=x;
        this->m_y=y;
        this->m_s=s;
    }
    int m_x;int m_y;int m_s;
};
int main()
{
    queue<node>que;
    int a[51][51]={0},book[51][51]={0};
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int k,n,m,startx,starty,q,p,tx,ty,flag;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    cin >> startx >> starty >> p >> q;
    node p1(startx,starty,0);
    que.push(p1);
    book[startx][starty]=1;
    flag=0;
    while(!que.empty())
    {
        for(k=0;k<4;k++)
        {
            tx=que.front().m_x+next[k][0];
            ty=que.front().m_y+next[k][1];
            if(tx<1 || tx>n || ty<1 || ty>m)
            continue;
            if(a[tx][ty]==0 && book[tx][ty]==0)
            book[tx][ty]=1;
            node p(tx,ty,que.front().m_s+1);
            que.push(p);
        }
        if(tx==p && ty==q)
        {
            flag=1;
            break;
        }
        if(flag==1)
        break;
        que.pop();
    }
    cout << que.back().m_s;
}