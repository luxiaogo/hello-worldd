#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
map<string,int>stringtoint;
map<int,string>inttostring;
map<string,int>ans;
int idnumber=1,k;
int e[2020][2020],weight[2020];
bool visit[2020];
int stoifunc(string a)
{
    if(stringtoint[a]==0)
    {
        stringtoint[a]=idnumber;
        inttostring[idnumber]=a;
        return idnumber++;       //如果说函数是不能改变全局变量的，那这个加加算是在函数结束后运行的，如果是++IDnumber会能改变值吗
    }
    return stringtoint[a];
}
void dfs(int u,int &head,int &totalweight,int &totalnum)
{
    visit[u]=true;
    totalnum++;
    if(weight[u]>=weight[head]){
        head=u;
    }
    for(int i=1;i<=idnumber;i++)
        if(e[u][i]>0){{
            totalweight+=e[u][i];
            e[u][i]=0;
            e[i][u]=0;
        }
        if(visit[i]==false)
        dfs(i,head,totalweight,totalnum);
}}
void dfstrave(){
    for(int i=1;i<idnumber;i++){
        if(visit[i]==false){
            int totalweight=0,totalnum=0,head=i;
            dfs(i,head,totalweight,totalnum);
            if(totalweight>k&&totalnum>2)
            ans[inttostring[head]]=totalnum;
        }
    }
}
int main()
{
    int n,weightt;
    cin >> n >> k;
    string a,b;
    for(int i=1;i<=n;i++)
    {
        cin >> a >> b >> weightt;
        int id1 = stoifunc(a);
        int id2 = stoifunc(b);
        weight[id1]+=weightt;
        weight[id2]+=weightt;
        e[id1][id2]+=weightt;   //这里为什么要用+=？因为可能会出现几次一样的东西来
        e[id2][id1]+=weightt;
    }
    dfstrave();
    cout << ans.size() << endl;
    for(auto it=ans.begin();it!=ans.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
