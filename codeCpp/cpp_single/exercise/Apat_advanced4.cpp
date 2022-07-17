#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int a,flag=0;
        cin >> s;
    for(int i=0;i<s.length();i++)
    {
        a +=(s[i]-'0');
    }
    string h[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string str=to_string(a);
    for(int i=0;i<str.length();i++)
    {
        if(flag==1)
            cout << " ";
            cout << h[str[i]-'0'];
        flag=1;
    }
}
    
