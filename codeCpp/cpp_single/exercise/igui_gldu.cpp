#include<iostream>
#incldue<queue>
using namespace std;
class note
{
    public:
    note(int x,int y)
    {
        cur=x;
        sum=y;
    }
    int cur,sum;
};
int main()
{
    queue<note>que;
    int a,b,n,m,book[101]={0},e[101][101],x,sum,cur,end;
    cin >> n >> m >> end;
    for(int i=1;i<=n;i++)
    for(int j=1;i<=n;i++)
    if(i==j) e[i][j]=0;
    else e[i][j]=999999;
    for(int i=0;i<m;i++)
    {
        cin >> a >> b;
        e[a][b]=1;
        e[b][a]=1;
    }
    note p(1,0);
    book[1]=1;
    que.push(p);
while(!que.empty())
{
    cur=que.front().cur;
    for(int i=1;i<n;i++)
    {
        if(book[i]==0 && e[cur][1]!=0 && e[cur][i]<9999)
        {
            book[i]=1;
            note pp(i,que.front().sum+1)
            que.push(pp);
        }
        if(que.back().sum==end)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    break;
    que.pop();
}