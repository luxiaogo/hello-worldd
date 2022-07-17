#include<iostream>
using namespace std;
#include<stack>
#include<string>
int main()
{
    stack<string>v;
    string s;
    while(cin >> s)
    v.push(s);
    cout << v.top();
    v.pop();
    while(!v.empty())
    {
        cout << " " << v.top();
        v.pop();
    }
}
