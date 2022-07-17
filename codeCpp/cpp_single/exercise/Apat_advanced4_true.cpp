#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v[100];
int maxdepth=-1,book[100],n,m;
void dfs(int step,int depth){
if(v[step].size()==0){
    book[depth]++;
    maxdepth=max(maxdepth,depth);
    return;
}
for(int i=0;i<v[step].size();i++){
    dfs(v[step][i],depth+1);
}
}
int main(){
    int tx,ty,tz;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> tx >> ty;
        for(int i=0;i<ty;i++){
            cin >> tz;
            v[tx].push_back(tz);
        }
    }
    dfs(1,0);
    int flag=0;
    for(int i=0;i<=maxdepth;i++){
        if(flag==1)cout << " ";
        cout << book[i];
        flag=1;
    }
}