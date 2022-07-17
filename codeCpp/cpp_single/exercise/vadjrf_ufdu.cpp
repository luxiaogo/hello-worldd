#include<iostream>
using namespace std;
char a[20][21];
int max,mx,my;
int getsum(int i,int j)
{
    int sum=0,x,y;
    x=i;y=j;
    while(a[x][y]!='#')
    {
        if(a[x][y]=='G')
        sum++;
        x++;
    }
    x=i;y=j;
    while(a[x][y]!='#')
    {
        if(a[x][y]=='G')
        sum++;
        x--;
    }
    x=i;y=j;
    while(a[x][y]!='#')
    {
        if(a[x][y]=='G')
        sum++;
        y++;
    }    
    x=i;y=j;
    while(a[x][y]!='#')
    {
        if(a[x][y]=='G')
        sum++;
        y--;
    }
    return sum;
}
void dfs(int x,int y)       //他给了你两个数不是用来摆看的，这是嵌套的基础
{
    int book[21][21]={0};
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int tx,ty,sum=0;
    if(getsum(tx,ty)>sum)
    sum=getsum(tx,ty);
    for(int k=0;k<4;k++)
    {
        tx=x+next[k][0];
        ty=y+next[k][1];
        if(a[tx][ty]=='#')
        continue;
        if(a[tx][ty]=='~' && book[tx][ty]==1)
        {
            book[tx][ty]=1;
            dfs(tx,ty);
        }
    }
    return;
}
int main()
{
    int startx,starty;
    cin >>startx >> starty;
    //初始化
    
}