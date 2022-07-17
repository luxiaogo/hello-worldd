#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin >> n >> d;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    int c[n];
    for(int i=0;i<n;i++)
    c[i]=b[i]/a[i];
    int i;
    for(int i=0;i<n;i++)
    for(int j=1;j<n;j++)
    if(c[i]<c[j])
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
         temp = b[i];
        b[i] = b[j];
        b[j] = temp;
         temp = c[i];
        c[i] = c[j];
        c[j] = temp;
    }
    int result;
    i=0;
    while(d!=0)
    {
        if(d>a[i])
        {result += b[i];d = d - a[i];i++;}
        else
        result += b[i] * (d/a[i]);
        d=0;
    }
    cout << result;
}