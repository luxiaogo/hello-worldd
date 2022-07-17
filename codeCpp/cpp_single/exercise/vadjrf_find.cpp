#include<iostream>
using namespace std;
#include<queue>
class node
{
    public:
    node(int x,int y,int sum){
    m_x=x;
    m_y=y;
    m_sum=sum;}
    int m_x,m_y,m_sum;
};
int main()
{
    queue<node>que;
    int map=0;
    int tx,ty,book[21][21]={0},m,n,startx,starty,p,q;
    char a[21][21];
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> startx >> starty;
    node pp(startx,starty,0);
    que.push(pp);
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    while(!que.empty())
    {
        for(int k=0;k<4;k++){          //问题：除了最后一步测的点都重复测了一遍
        p=tx;q=ty;
        while(a[tx][ty]!='#')
        {
            if(a[tx][ty]=='*')
            que.back().m_sum++;
            tx--;
        }
        tx=p;ty=q;
        while(a[tx][ty]!='#')
        {
            if(a[tx][ty]=='*')
            que.back().m_sum++;
            tx++;
        }
        tx=p;ty=q;
        while(a[tx][ty]!='#')
        {
            if(a[tx][ty]=='*')
            que.back().m_sum++;
            ty++;
        }
        tx=p;ty=q;
        while(a[tx][ty]!='#')
        {
            if(a[tx][ty]=='*')
            que.back().m_sum++;
            ty--;
        }
        if(que.back().m_sum>map)
        map=que.back().m_sum;
        tx=que.front().m_x+next[k][0];
        ty=que.front().m_y+next[k][1];
        if(a[tx][ty]=='#')
        continue;                 //就算这一步是有问题的，他也会去计算这一步的灭敌数。
        if(a[tx][ty]=='·' && book[tx][ty]==0)
        {
            book[tx][ty]=1;
            node ppp(tx,ty,0);
            que.push(ppp);
        }
        }
        que.pop();
    }
}