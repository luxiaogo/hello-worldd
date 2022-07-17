#include<iostream>
using namespace std;
#include<stack>
int a[51][51],book[51][51],n,m,flag;
class note
{
    public:
    note(int x,int y)
    {
        m_x=x;
        m_y=y;
    }
    int m_x,m_y;
};
stack<note>s1;
stack<note>s2;
void dfs(int x,int y,int front)
{
    if(x==n && y==m+1)
    {
        flag=1;
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        while(!s2.empty())
        {
            cout << s2.top().m_x;
            cout << s2.top().m_y;
            s2.pop();
        }        
    }
    if(x>n || x<1 || y>m || y<1)
    {
        return;
    }
    if(book[x][y]==1)
    return;
    book[x][y]=1;
    note n(x,y);
    s1.push(n);
    if(a[x][y]==5 || a[x][y]==6)
    {
        if(front==1)
        {
            dfs(x,y+1,1);
        }        
        if(front==2)
        {
            dfs(x+1,y,1);
        }        
        if(front==3)
        {
            dfs(x,y-1,1);
        }        
        if(front==4)
        {
            dfs(x-1,y,1);
        }
    }
    if(a[x][y]>=1 && a[x][y]<=4)
    {
        if(front == 1){
        dfs(x+1,y,2);
        dfs(x-1,y,4);}
        if(front == 2){
        dfs(x,y-1,3);
        dfs(x,y+1,1);}
        if(front ==3){
        dfs(x-1,y,4);
        dfs(x+1,y,2);}
        if(front == 4){
        dfs(x,y-1,3);
        dfs(x,y+1,1);}
    }
};
int main()
{
    int startx,starty;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin >> a[i][j];
    dfs(startx,starty,1);
    getchar();getchar();
    return 0;
}