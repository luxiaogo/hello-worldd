#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum=0;
    for(int i=0;i<s.length();i++)
    sum += (s[i]-'0');
    string str[10]={"ling","yi","er","san","si","wu","liu","qi","ba""jiu"};
    string st=to_string(sum);
    for(int i=0;i<st.length();i++){
    if(i!=0)cout << ' ';
    cout << str[st[i]-'0'];}
}