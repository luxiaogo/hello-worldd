#include<iostream>       //周末有空来复习一下
#include<queue>
using namespace std;
class node
{
    public:
    class(int a,b,c)
    {
        x=a;
        y=b;
        s=c;
    }
    int x,y,s;
}
int main()
{
    int startx,starty,tx,ty,e[51][51],flag,n,m;
    int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    bool book[51][51]={false};
    queue<node>que;
    node n(tx,ty,0);
    book[tx][ty]=true;
    que.push(n);
    while(!que.empty())
    {
        for(int i=0;i<4;i++)
        {
            tx=que.front().x+next[i][0];
            ty=que.front().y+next[i][1];
            if(tx>x || ty>y || tx<1 || ty<1)
            continue;
            node pp(tx,ty,s+1);
            que.push(pp);
        }
        if(tx==p && tx==q)
        {
            flag=1;
            break;
        }
        if(flag==1)
        break;
        que.pop();
    }
}