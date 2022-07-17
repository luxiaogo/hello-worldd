#include<iostream>
#include<map>
#include<iostream>
using namespace std;
const int inf=99999999;
map<string,int>stringtoint;
map<int,string>inttostring;
int n,k;
int e[510][510]={inf},weight[510];
map<string,int>ans;
int maxnum=1;
int stoifunc(string s){
    if(stringtoint[s]==0){
        stringtoint[s]=maxnum;
        inttostring[maxnum]=s;
        return maxnum++;
    }
    return stringtoint[s];
}
bool visit[510]={false};
void dfs(int &v,int&head,int&totalnum){
    visit[v]=true;
    totalnum++;
    if(weight[v]>weight[head]){
        head=v;
    }
    for(int i=1;i<=maxnum;i++){
        if(e[v][i]<inf && visit[i]==false){
            dfs(i,head,totalnum);
        }
    }
}
void dfstrave(){
    for(int i=1;i<maxnum;i++){
        if(visit[i]==false){
            int totalnum=0,head=i;
            dfs(i,head,totalnum);
            if(weight[head]>k&&totalnum>2){
                ans[inttostring[head]]=totalnum;
            }
        }
    }
}
int main(){
    cin >> n >> k;
    string x,y;
    int num;
    for(int i=0;i<n;i++){
        cin >> x >> y >> num;
        e[stoifunc(x)][stoifunc(y)]+=num;
        e[stoifunc(x)][stoifunc(y)]+=num;
        weight[stoifunc(x)]+=num;
        weight[stoifunc(y)]+=num;
    }
    dfstrave();
    for(auto it:ans){
        cout << it.first << " " << it.second;
    }
}