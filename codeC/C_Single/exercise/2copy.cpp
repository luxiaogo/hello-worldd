#include<iostream>
using namespace std;
int main()
{
    char c;
    c=getchar();
    while(c!='\n')
    if(c>'a'&&c<'z'||c>'A'&&c<'Z')
    {if(c>'a'&&c<'w'||c>'A'&&c<'W')
    c += 4;
    else c -= 22;}
    cout << c ;
    return 0;
}