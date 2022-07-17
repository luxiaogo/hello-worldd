#include<iostream>
using namespace std;
#include<queue>
class node
{
    public:
    node(int x,int y,int s){
    m_s=s;
    m_x=x;
    m_y=y;}
    int m_s,m_x,m_y;
};
int main()
{
    queue<node>que;
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int a[51][51]={0},book[51][51]={0};
    int n,m,p,q,startx,starty,flag,tx,ty=0;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    cin >> startx >> starty >> p >> q;
    node p1(startx,starty,0);
    que.push(p1);
    while(!que.empty())
    {
        for(int k=0;k<4;k++)
        {
        tx=que.front().m_x+next[k][0];
        ty=que.front().m_y+next[k][1];
        if(tx<1 || tx>n || ty<1 || ty>m)
        continue;
        if(a[tx][ty]==0 && book[tx][ty]==0)
        {
        book[tx][ty]=1;
        node p(tx,ty,que.front().m_s+1);
        que.push(p);
        }
        if(p==tx && q==ty)
        {
            flag=1;
            break;
        }
        }
        if(flag==1)
        break;
        que.pop();
    }
    cout << que.back().m_s;
}