#include<iostream>
using namespace std;
int main()
{
    int b[3],n;
    cin >> n;
    b[2]=(n % 10);
    n=n/10;
    b[1]=n %10;
    n=n/10;
    b[0]=n;
    while(b[0]!=0)
   {cout << 'B';
    b[0]--;}
    while(b[1]!=0)
    {
        cout << 'S';
        b[1]--;
    }
    for(int i=1;i<=b[2];i++)
    cout << i;
}