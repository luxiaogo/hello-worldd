#include<iostream>
using namespace std;
int a[10],book[10],k;
int n;
void dfs(int step)
{
    if(step==n+1)
    {
        for(int i=1;i<10;i++)
        cout << a[i];
        return;
    }
    for(int i=1;i<10;i++)
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
}