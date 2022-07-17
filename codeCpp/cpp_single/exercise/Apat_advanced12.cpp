#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_min(int a,int b,int c,int d)
{
    int smal;
    smal=min(a,b);
    smal=min(smal,c);
    smal=min(smal,d);
    return smal;
}
struct num
{
    string s;
    int c,m,e,a;
};
bool cmp1(num &x,num &y)
{
    return x.a>y.a;
}
bool cmp2(num &x,num &y)
{
    return x.c>y.c;
}
bool cmp3(num &x,num &y)
{
    return x.m>y.m;
}
bool cmp4(num &x,num &y)
{
    return x.e>y.e;
}
int main()
{
    string comer;
    int n,m,x;
    cin >> n >> m;
    vector<num>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i].s >> v[i].c >> v[i].m >> v[i].e;
        x=(v[i].c+v[i].m+v[i].e)/3;
        v[i].a=x;
    }
    vector<num>vv(v);
    vector<num>v1(v);
    sort(v1.begin(),v1.end(),cmp1);
    vector<num>v2(v);
    sort(v2.begin(),v2.end(),cmp2);
    vector<num>v3(v);
    sort(v3.begin(),v3.end(),cmp3);
    vector<num>v4(v);
    sort(v4.begin(),v4.end(),cmp4);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vv[j].s==v1[i].s)
                vv[j].a=i;
            if(vv[j].s==v2[i].s)
                vv[j].c=i;
            if(vv[j].s==v3[i].s)
                vv[j].m=i;
            if(vv[j].s==v4[i].s)
                vv[j].e=i;
        }
    }
    int flag=0,small;
    for(int i=0;i<m;i++)
    {
        cin >> comer;
        for(int j=0;j<n;j++)
        {
            if(vv[j].s==comer)
            {
                small=find_min(vv[j].c,vv[j].a,vv[j].m,vv[j].e);
                flag=1;
                if(small==vv[j].a){cout << vv[j].a+1 << " " << 'A' << endl;continue;}
                if(small==vv[j].c){cout << vv[j].c+1 << " " << 'C' << endl;continue;}
                if(small==vv[j].m){cout << vv[j].m+1 << " " << 'M' << endl;continue;}
                if(small==vv[j].e){cout << vv[j].e+1 << " " << 'E' << endl;continue;}
            }
        }if(flag==0)cout << "N/A" << endl;flag=0;
    }
}