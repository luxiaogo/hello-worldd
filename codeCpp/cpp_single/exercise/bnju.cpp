#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m,f[10],sum=0;
class note
{
    public:
    note(int a,int b,int c)
    {
        x=a;
        y=b;
        lu=c;
    }
    int x,y,lu;
};
int getf(int i)
{
    if(f[i]==i)
    return i;
    else
    {
        getf(f[i]);
        return(f[i]);
    }
}
int merge(int x,int y)
{
    int t1,t2;
    t1=getf(x);
    t2=getf(y);
    if(t1!=t2)
    {
        f[t2]=t1;
        return 1;
    }
    return 0;
}
int main()
{
    vector<note>v;
    int a,b,c;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
       cin >> a >> b >> c;
       note p1(a,b,c); 
       v.push_back(p1);
    }
    sort(v.begin(),v.end());          //为什么会报错？
    int i;
    for(i=1;i<=n;i++){
    f[i]=i;
    int count;
    for(i=1;i<=m;i++)
    if(merge(v[i].x,v[i].y))
    {
        count++;
        sum += v[i].lu;
    }
    if(count==n-1)break;
    }
}