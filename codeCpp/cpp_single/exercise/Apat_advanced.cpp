#include<iostream>
using namespace std;
int main()
{
    int n,x;
    float a[1001]={0},y;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        a[x]+=y;
    }
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        a[x]+=y;
    }
    int cnt=0;
    for(int i=0;i<1001;i++)
        if(a[i]!=0)
            cnt++;
    cout << cnt;
    for(int i=1000;i>=0;i--)
    {
        if(a[i]!=0)
            cout << " " << i << " " <<a[i];
    }
}