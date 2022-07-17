#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    node(int x,int y)
    {
        m_x=x;
        m_y=y;
    }
    int m_x,m_y;
};
int main()
{
    queue<node>que;
    int startx,starty,tx,ty,flag=0,n,m,sum=1;
    int a[51][51],book[51][51]={0};
    cin >> n >> m;
    for(int i=0;i<n,i++)
    for(int j=0;j<m,j++)
    {
        cin >> a[i][j];
    }
    cin >> startx >> starty;
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    node pp(startx,starty);
    que.push(pp);
    while(!que.empty())
    {
        for(int k=0;k<4;k++)
        {
            tx=que.front().m_x+next[k][0];
            ty=que.front().m_y+next[k][1];
            if(a[tx][ty]==0)
            continue;
            if(book[tx][ty]==1){
            book[tx][ty]=1;t
            sum++;
            node ppp(tx,ty);
            que.push(ppp);}
        }
        que.pop();
    }
}