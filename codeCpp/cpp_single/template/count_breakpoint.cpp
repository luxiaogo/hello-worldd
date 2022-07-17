#include<iostream>
using namespace std;
int n,m,k;
int e[1010][1010];
bool visit[n+1]={false};
void dfs(int step){
    visit[step]=true;
    for(int i=1;i<=n;i++){
        if(e[step][i]!=0 && visit[i]==false){
            dfs(i);
        }
    }
}
int main()
{
    int x,y;
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        cin >> x >> y;
        e[x][y]=1;
        e[y][x]=1;
    }   
    int num;
    for(int i=0;i<k;i++){
        fill(visit.begin(),visit.end(),false);          //这一步
        cin >> num;
        int cnt=0;
        for(int j=1;j<=n;j++){                          //j
            if(visit[i]!=false){
                dfs(i);
                cnt++;
            }
        }
        cout << cnt-1 << endl;
    }
}