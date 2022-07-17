#include<iostream>
using namespace std;
int main()
{
    int b;
    cin >> b;
    int a[11],t;
    for(int i=0;i<11;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<b;i++){
    cin >> t;
    a[t]++;
    }
    for(int i=0;i<11;i++)
    if(a[i]!=0)
    cout << i << " ";
}