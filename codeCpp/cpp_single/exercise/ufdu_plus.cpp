#include<iostream>
using namespace std;
int a[51][51],book[51][51];
int mini=99999;
void dfs(int x,int y,int step)
{
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int tx,ty,p,q,startx,starty,m,n;
    if(tx==p && ty==q)
    {
        if(step<mini)
        mini=step;
        return;
    }
    for(int k=0;k<4;k++)
    {
        tx=tx+next[k][0];
        ty=ty+next[k][1];
        if(tx<1 || tx> m || ty<1 || ty>n)
        continue;
        if(a[tx][ty]==0 && book[tx][ty]==0){
        book[tx][ty]=1;
        dfs(tx,ty,step+1);
        book[tx][ty]=1;}
    }
    return;
}
int main()
{
    getchar();getchar();
    return 0;
}
