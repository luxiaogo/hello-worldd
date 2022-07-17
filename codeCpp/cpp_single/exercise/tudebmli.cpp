#include<iostream>w
using namespace std;
int a[51][51],book[51][51],sum=1;
void dfs(int x,int y,int color)
{
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int tx,ty;
    for(int k=0;k<4;k++)
    {
        tx=x+next[k][0];
        ty=y+next[k][1];
        a[tx][ty]=color;
        if(a[tx][ty]==0)
        continue;
        if(book[tx][ty]==0)
        {
            book[tx][ty]=1;
            sum++;
            dfs(tx,ty,color);
            return;
        }
    }
    return;
}
int main()
{
    int startx,starty,n,m,num=-1;
    cin >> startx >> starty >> n >> m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        cin >>  a[i][j];
    }
    book[startx][starty]=1;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        if(a[i][j]>0)
        {
            dfs(i,j,num);
            num--;
        }
    
    }
    cout << num+1;
}