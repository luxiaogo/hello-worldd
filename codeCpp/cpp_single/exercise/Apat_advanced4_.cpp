#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m,k;
int maxdepth=-1;
int book[100];
vector<int>v[100];
void dfs(index,depth)
{
    if(v[index].size()==0)
    {
        book[depth]++;
        maxdepth=max(maxdepth,depth);
        return;
    }
    for(int i=0;i<v[i].size();i++)
    {
        dfs(v[index][i],depth+1);
    }
}
int main()
{
    int x,y;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        cin >> x >> k;
        for(int j=0;j<k;j++)
        {
            cin >> y;
            v[x].push_back(y);
        }
    }
    dfs(1,0);
    int flag=0;
    for(int i=1;i<=maxdepth;i++)
    {
        if(flag==1)cout << " ";
        cout << book[i];
        flag=1;
    }
}