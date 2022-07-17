#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a,int b){return a>b;}
int main(){
    vector<int>v[4];
    int n,m,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp>0){
            v[0].push_back(temp);
        }else v[1].push_back(temp);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> temp;
        if(temp>0)v[2].push_back(temp);
        else v[3].push_back(temp);
    }
    for(int i=0;i<3;i++){
        sort(v[i].begin(),v[i].end(),cmp);
    }
    sort(v[3].begin(),v[3].end());
    int sum=0;
    for(int i=0;i<v[0].size()&&i<v[2].size();i++){
        sum+=v[0][i]*v[2][i];
    }
    for(int i=0;i<v[1].size()&&i<v[3].size();i++){
        sum+=v[1][i]*v[3][i];
    }
    printf("%d",sum);
}