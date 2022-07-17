#include<iostream>
#include<queue>
using namespace std;
class note
{
    public:
    note(int x,int y,int s)
    {
        xx=x;
        yy=y;
        ss=s
    }
    int xx,yy,ss;
};
int main()
{
    int startx,starty,a[51][51]={0},book[51][51]={0},tx,ty,p,q,flag,
    int next[4][2]={(0,1),(1,0),(-1,0),(0,-1)};
    cin >> n >> m;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        cin >> a[i][j];
    }
    cin >> startx >> starty >> p >> q;
    note p1(startx,starty,0);
    queue<note>que;
    que.push(p1);
    book[startx][starty]=1;
    flag=0;
}