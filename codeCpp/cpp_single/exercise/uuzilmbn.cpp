#include<iostream>
using namespace std;
int main()
{
    int right[10]={0},data[10],n,len,t;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> data[i];
    }
    for(int i=1;i<n;i++)
    right[n]=n+1;
    len=n;
    len++;
    t=1;
    while(right[t]!=0)
    {
        if(data[len]>data[t])
        {
            right[len]=right[t];
            right[t]=len;
            break;
        }
        t=right[t];
    }
    t=1;
    while(right[t]!=0)
    {
        cout << dada[t];
        t=right[t];
    }
}