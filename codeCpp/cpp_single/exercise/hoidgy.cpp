#include<iostream>
using namespace std;
/*int func(int a)
{
    int num=0;
    int f[10]={6,2,5,5,4,5,6,3,7,6};
    while(a/10!=0)
    {
        num += f[a%10];
        a /= 10;
    }
    num +=f[a];
    return num;
}*/
int func(int a)
{
    int sum=0;
    int f[10]={6,2,5,5,4,5,6,3,7,6};
    while(a/10!=0)
    {
        sum += f[a%10];
        a /= 10;
    }
    sum += f[a];
    return sum;
}
int main()
{
    int a,b,c,m,sum=0;
    cin >> m;
    for(a=0;a<1111;a++)
    {
    for(b=0;b<1111;b++)
    {
        c=a+b;
        if(func(a)+func(b)+func(c)==m)
        {
        cout << a << '+' << b << '=' << c << endl;
        sum++;
    }
    }
    }
    cout << "一共可以输出的数字的数量为：" << sum;
}