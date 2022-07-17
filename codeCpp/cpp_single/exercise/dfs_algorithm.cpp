#include<iostream>
using namespace std;
int a[10],book[10],n,total=0;
void dfs(int step)
{
    int i;
    if(a[1]*100+a[2]*10+a[3]+a[4]*100+a[5]*10+a[6]==a[7]*100+a[8]*10+a[9] && step==n+1){
    total++;
    return;}
    for(i=1;i<=n;i++)
    {
        if(book[i]==0)
        {
            a[step]=i;
            book[i]=1;
            dfs(step+1);
            book[i]=0;
        }
    }
    return;
}
int main()
{
    cin >> n;
    dfs(1);
    cout << total/2;
}