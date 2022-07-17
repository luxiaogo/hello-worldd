#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
map<string,int>stringtoint;
map<int,string>inttostring;
bool visit[2020]={__false_type};
int e[2020][2020],weight[2020];         //w是来确定head，e是来确定totalweight
int number=1;
map<string,int>ans;
int stoifunc(string s){
    if(stringtoint[s]==0){
        stringtoint[s]=number;
        inttostring[number]=s;
        return number++;
    }else{
        return stringtoint[s];
    }
}
void dfs(int v,int &head,int &totalnum,int &totalweight)
{
    visit[v]=true;
    totalnum++;
    if(weight[v]>weight[head])head=v;
    for(int i=1;i<=number;i++)
    {
        if(e[v][i]>0)
        {
            totalweight+=e[v][i];
            e[v][i]=0;
            e[i][v]=0;   //这条路只要走一次，有回路，要加上全部路径；
            if(visit[i]==false){
                dfs(i);
            }
        }
    }
}
void travedfs(int v)
{
    for(int i=1;i<number;i++)
    {
        if(visit[i]==false){
        int totalnumber=0,totalweight=0,head=v;
        dfs(v,head,totalnum,totalweight)
        ans[stringtoint[head]]=totalnum;}
    }
}
int main()
{

}
