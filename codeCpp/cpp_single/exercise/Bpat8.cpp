#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int s,m;
    cin >> s >> m;
    vector<int>v(s);
    for(int i=0;i<s;i++)
    cin >> v[i];
    reverse(v.begin(),v.begin()+s);
    reverse(v.begin(),v.begin()+s-m);
    reverse(v.begin()+s-m,v.begin()+s);
    for(int i=0;i<s;i++){
    if(i!=0)
    cout << " ";
    cout << v[i];}
}