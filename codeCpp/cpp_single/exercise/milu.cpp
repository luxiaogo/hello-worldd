#include<iostream>
using namespace std;
int a[51][51],book[51][51];
int mini=99999;
int m,n,p,q;
void dfs(int x,int y,int step)
{
    int tx,ty,k;
    int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    if(x==p && y==q)
    {
        if(step<mini)
        mini=step;
        return;
    }
    for(k=0;k<4;k++){
    if(tx<1 || tx>m || ty<1 || ty>n)
    {
        continue;
    }
    if(a[tx][ty]==0 && book[tx][ty]==0)
    {
        book[tx][ty]=1;
        tx += next[k][0];
        ty += next[k][1];
        dfs(tx,ty,step+1);
        book[tx][ty]=0;
    }}
    return;
}
int main()
{
    cin >> m >> n;
    for(int i=0;i<m;i++)
    for(int j=0;i<n;i++)
    {
        cin >> a[i][j];
    }
    cin >> p >> q;
    book[0][0]=1;
    dfs(0,0,0);
    cout << mini;
}
