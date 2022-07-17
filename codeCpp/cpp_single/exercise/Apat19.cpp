#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
bool cmp(char a,char b)
{
    return a>b;
}
int main()
{
    string s;
    cin >> s;
    s.insert(0,4-s.length(),'0');
    while(s!="6174" && s!="0000")
    {
        string a=s;string b=s;
        sort(a.begin(),a.end(),cmp);
        sort(b.begin(),b.end());
        int result=stoi(a)-stoi(b);
        s=to_string(result);
        s.insert(0,4-s.length(),'0');
        cout << a << '-' << b << '=' << s <<endl;
    }
}