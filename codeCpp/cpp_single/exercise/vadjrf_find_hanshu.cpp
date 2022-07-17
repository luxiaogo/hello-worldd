#include<iostream>
using namespace std;
#include<queue>
class node
{
    public:
    node(int m_x,int m_y)
    {
        x=m_x;
        y=m_y;
    }
    int x,y;
};
char a[20][21];
int getsum(int i,int j)
{
    int x,y,sum=0;
    x=i;y=j;
    while(a[x][y]!='#'){
    if(a[x][y]=='*')
    sum++;
    x--;}
    x=i;y=j;
    while(a[x][y]!='#')
    {
        if(a[x][y]=='*')
        sum++;
        x++;
    }
    x=i;y=j;
    while(a[x][y]!='#')
    {
        if(a[x][y]=='*')
        sum++;
        y--;
    }
    x=i;y=j;
    while(a[x][y]!='#')
    {
        if(a[x][y]=='*')
        sum++;
        y++;
    }
    return sum;
}
int main()
{
    int book[20][21]={0};
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int tx,ty,startx,starty,n,m;
    queue<node>que;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    cin >> a[i];
    cin >> startx >> starty;
    node p(startx,starty);
    que.push(p);
    int map=getsum(startx,starty);
    while(!que.empty())
    {
        for(int k=0;k<4;k++)
        {
            tx=que.front().x+next[k][0];
            ty=que.front().y+next[k][1];
            if(a[tx][ty]=='#')
            continue;
            if(a[tx][ty]=='`' && book[tx][ty]==0)
            {
                book[tx][ty]=1;
                node pp(tx,ty);
                que.push(pp);
                map=getsum(tx,ty);
            }
        }
        que.pop();                
    }
}