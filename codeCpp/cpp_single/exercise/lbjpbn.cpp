#include<iostream>
using namespace std;
int main()
{
    int u[6],v[6],w[6],first[6],next[6];
    for(int i=1;i<=6;i++)
    first[i]=-1;
    for(int i=1;i<=6;i++)
    {
        cin >> u[i] >> v[i] >> w[i];
        next[i]=first[u[i]];
        first[u[i]]=i;
    }
    for(int i=1;i<=5;i++)
    {
        int k=first[i];
        while(k!=-1)
        {
            cout << u[k] << ' ' << v[k] << ' ' << w[k] << endl;
            k=next[k];e
        }
    }
}