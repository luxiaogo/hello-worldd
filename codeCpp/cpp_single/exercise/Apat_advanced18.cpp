#include<iostream>         //如何记录路径   //22分了已经
#include<vector>
#include<algorithm>
using namespace std;
int n,m,s,c,road,inf=99999,num[501],low,high;
int e[501][501]={inf};
int half;
bool visit[501];
vector<int>lujing;//
class place
{
    public:
    place(int a,int b,int c,vector<int>aa)
    {
        rr=a;
        ll=b;
        hh=c;
        vv=aa;
    }
    int rr,ll,hh;
    vector<int>vv;
};
vector<place>v;
vector<int>g;
void dfs(int step)
{
    if(step==s)
    {
        if(num[s]>half)low+=half;
        if(num[s]<half)high+=half;
        place pp(road,low,high,g);
        v.push_back(pp);
        if(num[s]>half)low-=half;
        if(num[s]<half)high-=half;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(e[step][i]>0 && e[step][i]<inf && visit[i]==false)
        {
            visit[i]=true;
            road+=e[step][i];
            if(num[s]>half)low+=(half-num[i]);
            if(num[s]<half)high+=(num[i]-half);        //这里不行，要提到前面去
            g.push_back(i);
            dfs(i);
            g.pop_back();
            visit[i]=false;
            if(num[s]>half)low-=(half-num[i]);
            if(num[s]<half)high-=(num[i]-half);
            road-=e[step][i];
        }
    }
    return;
}
int main()
{
    cin >> c >> n >> s >> m;
    half=c/2;
    num[0]=5;
    for(int i=1;i<=n;i++)
    {
        cin >> num[i];
    }
    int x,y,z;
    for(int i=1;i<=501;i++)      //为什么我把e放在这里等于INF就出问题？？？？？？？
    for(int j=1;j<=501;j++)
    {
        if(i==j)
        e[i][j]=0;
    }
    for(int i=0;i<m;i++)
    {
        cin >> x >> y >> z;
        e[x][y]=z;
        e[y][x]=z;
    }
    g.push_back(0);
    visit[0]=true;
    dfs(0);
    vector<int>yy;
    place pla(0,0,0,yy);
    int min=99999;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].rr<min)
        {
            min=v[i].rr;
            pla=v[i];
        }
        else if(v[i].rr==min)
        {
            if(num[s]>half)
            {
                if(v[i].ll>pla.ll)
                pla=v[i];
            }
            if(num[s]<half)
            {
                if(v[i].hh>pla.hh)
                pla=v[i];
            }
        }
    }
    int flag=0;
    if(num[s]>half)
    {
        cout << '0' << ' ';
        for(int i=0;i<pla.vv.size();i++)
        {
            if(flag==1)
            cout << "->";
            cout << pla.vv[i];
            flag=1;
        }
        cout << ' ' << half-pla.ll;
    }
    flag=0;
    if(num[s]<half)
    {
        cout << half-pla.hh << " ";
        for(int i=0;i<pla.vv.size();i++)
        {
            if(flag==1)
            cout << "->";
            cout << pla.vv[i];
            flag=1;
        }
        cout << " " << '0';
    }
}