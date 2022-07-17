#include<iostream>
using namespace std;
int main()
{
    int c1,c2;
    cin >> c1 >> c2;
    int sum =((c1-c2)+50)/100;
    int s = sum % 60;                                               //四舍五入
    sum /= 60;
    int m = sum % 60;
    sum /= 60;
    int h = sum ;
    printf("%d:%d:%d",h,m,s);
}