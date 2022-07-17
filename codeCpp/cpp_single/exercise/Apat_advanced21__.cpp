#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,maxx=0,e[101][101],flag=0;
bool visit[101]={false};
vector<int>error;
void dfs(int cur,int step,int father)
{
    maxx=max(step,maxx);
    for(int i=1;i<=n;i++)
    {
        if(e[cur][i]==1 && visit[i]==false)
        {
            visit[i]=true;
            dfs(i,step+1,cur);
            visit[i]=false;
        }
        else if(visit[i]==true && i!=father)  //未必靠谱
        {
            vector<int>::iterator it =find(error.begin(),error.end(),father);
            if(it==error.end())
            error.push_back(father);
            vector<int>::iterator a =find(error.begin(),error.end(),cur);
            if(a==error.end())
            error.push_back(cur);
            flag=1;
        }
    }
    return;
}
int main()
{
    vector<int>v;
    int x,y;
    cin >> n;
    for(int i=1;i<n;i++)
    {
        cin >> x >> y;
        e[x][y]=1;
        e[y][x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        dfs(i,0,i);
        v.push_back(maxx);
        maxx=0;
        if(flag==1)
        {
            printf("Error: %d components",error.size());
            break;
        }
    }
    int book=0;
    if(flag==0)
    for(int i=100;i>0;i--)
    {
        for(int j=1;j<=v.size();j--)
        {
            if(v[j]==i);
            cout << j << endl;
            book=1;
        }
        if(book==1)break;
    }
}