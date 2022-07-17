#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int book[100],maxdepth=-1;
vector<int>v[100];
void dfs(int index, int depth)
{
    if(v[index].size()==0)
    {
        book[depth]++;
        maxdepth=max(maxdepth,depth);
        return;
    }
    for(int i=0;i<v[index].size();i++)
    {
        dfs(v[index][i], depth+1);
    }
}
int main()
{
    int n,m,node,k,
}