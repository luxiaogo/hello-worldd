#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int sum=a+b;
    int h[100];
    int i=0;
    while(sum!=0)
    {
        h[i++]=sum%c;
        sum = sum/c;
    }
    for(int j=i-1;j>=0;j--)
    cout << h[j];
}
