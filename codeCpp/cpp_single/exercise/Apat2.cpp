#include<iostream>
using namespace std;
int main()
{
    int sum,flag=0;
    string s;
    cin >> s;
    int len=s.length();
    for(int i=0;i<len;i++)
        sum +=s[i]-'0';
    string chr[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string ss=to_string(sum);
    int llen=ss.length();
    for(int i=0;i<llen;i++)
    {
        if(flag==1)
            cout << ' ';
        cout << chr[ss[i]-'0'];
        flag=1;
    }
}