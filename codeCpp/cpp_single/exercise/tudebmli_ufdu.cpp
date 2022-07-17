#include<iostream>
#include<queue>
int main()
{
    int a,b,n,m,book[101]={0},e[101][101];
    cin >> a >> b;
    for(int i=1;i<=n;i++)
    for(int i=1;i<=n;i++)
    if(i==j) e[i][j]=0;
    else e[i][j]=999999;
    queue<int>que;
    que.push(1);
    book[1]=1;
    for(int i=0;i<m;i++)
    {
        cin >> a >> b;
        e[a][b]=1;
        e[b][a]=1;
    }while(!que.empty()){
    cur=que.front();
    for(int i=1;i<=n;i++)
    {
        if(a[cur][i]==1 && book[i]=0)
        {
            book[i]=1;
            que.push(i);
        }
    }
    que.pop();
    }
    
}