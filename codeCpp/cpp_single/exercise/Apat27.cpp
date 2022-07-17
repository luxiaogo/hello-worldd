#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n;
    char c;
    cin >> n >> c;
    int sum=1,i=1;
    while(sum<n)
    {
        sum=4*i+2+sum;
        i++;
    }
    int back = (-2 + sqrt(4 + 4 * (3 + 4 * ((sum -1)/2))))/2;
    for(int j = back;j>=1;j -= 2)
    {
        int k=j;
        while(k!=0)
        {
            cout << '*';
            k--;
        }
        cout << endl;
    }
    for(int j=3;j<=back;j += 2)
    {
        int k = j;
        while(k!=0)
        {cout << '*'; k--;}
        cout << endl;
    }
}