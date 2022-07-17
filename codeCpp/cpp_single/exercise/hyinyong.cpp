#include <iostream>
using namespace std;
void change(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    void change(int &a,int &b);
    int c,d;
    c=100;
    d=200;
    change(c,d);
    cout<<c<<endl<<d;
    
}