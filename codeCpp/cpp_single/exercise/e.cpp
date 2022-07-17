#include<iostream>

using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    string str[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int i;
    for(i=0;i<s.length();i++)
    sum += (s[i]-'0');
    string num = to_string(sum);
    for (i=0;i<num.length();i++){
    cout << " ";
    cout << str[num[i]-'0'];}
}