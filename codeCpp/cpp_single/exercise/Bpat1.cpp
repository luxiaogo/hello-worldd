#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int c=a+b;
    string s=to_string(c);
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        cout << s[i];
        if(s[i]=='-')
        continue;
        if((i+1)%3==len%3 && i+1!=len)
        cout << ',';
    }
}
