#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i=0;
    while(s[i]!= 'E'])i++;
    string t = s.substr(1,i-1);
    int n= stoi(s.substr(i+1));
    if(s[0]=='-')cout << '=';
    if(n<0)
    {
        cout << "0.";
        for(int i=0;i<abs(n)-1)cout << '0';
        for(int j=0;j<t.length();j++)
        if(s[j]!='.')
        cout t[j];
    }
    else
    {
        cout << t[0];
        int cnt,j;
        for(j=2,cnt=0;j<t.length() && cnt <n;j++,cnt++){
        if(j==t.length())
        for(int k=0;k<n-cnt;k++)cout << '0';
        else{
        cout << '.';
        for(int k=j;k<t.length();k++)
        cout << t[k];
        }
        }
    }
}