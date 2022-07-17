#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin >> v[i];
    reverse(v.begin(),v.begin()+n);
    reverse(v.begin(),v.begin()+m);
    reverse(v.begin()+m,v.begin()+n);
    for(int i=0;i<n-1;i++)
    cout << v[i] << " ";
    cout << v[n-1];
}