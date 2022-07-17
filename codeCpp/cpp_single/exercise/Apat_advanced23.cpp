#include<iostream>
#include<algorithm>
using namespace std;
string s;
int main()
{
    cin >> s;
    string ss=s;
    int carry=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        int a=0;
        a=(s[i]-'0')*2+carry;
        carry=0;
        if(a>9)
        {
            s[i]='a-10';
            carry=1;
        }
        else s[i]='a';
        if(carry)s+='1';
    }
    string str=s;
    sort(s.begin(),s.end());
    sort(ss.begin(),ss.end());
    if(s==ss)
    {
        cout << "Yes" << endl << str;
    }else cout << "No" << endl << str;
}
