#include<iostream>
using namespace std;
int f[1000],n,m,k,sum=0;
void init()
{
    int i;
    for(i=1;i<=n;i++)
    f[i]=i;
}
void getf(int v)
{
    if(f[v]==v)
    return v;
    else
    {
        getf(f[v]);
        return f[v];           //为什么
    }
}
void merge(int v,int u)
{
    int t1,t2;
    t1=getf(v);
    t2=getf(u);
    if(t1!=t2)
    {
        f[t2]=t1;
    }
    return;
}
int main()
{
    int x,y;
    for(int i=1;i<=m;i++)
    {
        cin >> x >> y;
        merge(x,y);
    }
    for(int i=1;i<=n;i++)
    if(f[i]==i)
    sum++;
    cout >> sum;
    getchar();getchar();
    return 0;
}