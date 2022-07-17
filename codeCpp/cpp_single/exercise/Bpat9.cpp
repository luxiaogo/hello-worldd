#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>v;
    string s;
    while(cin >> s)
    v.push(s);
    int flag=0;
    while(!v.empty())
    {
        if(flag==1)
        cout << " ";
        cout << v.top();
        v.pop();
        flag=1;
    }
}