#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a=n%10;
    n /= 10;
    int b=n%10;
    int c = n/10;  //c百位，b十位，a个位
    for(int i=0;i<c;i++)
    cout << 'B';
    for(int i=0;i<b;i++)
    cout << 'S';
    for(int i=1;i<a+1;i++)
    cout << i;
}