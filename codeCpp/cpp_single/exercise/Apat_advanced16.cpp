#include<iostream>          //这不是可以用map veli明显了
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct NODE
{
    string name,time,line;
}
int main()
{
    int a[25];
    for(int i=1;i<=25;i++)
    cin >> a[i];
    int n;
    cin >> n;
    NODE node[n];
    for(int i=0;i<n;i++)
    {
        cin >> node[i].name >> node[i].time >> node[i].line;
    }
    ''
}