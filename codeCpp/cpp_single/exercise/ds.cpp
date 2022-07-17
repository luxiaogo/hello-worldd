#include<iostream>
#include<vector>
using namespace std;
bool isprime(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)return false;
    }
    return true;
}
int main()
{
    int n,m,cnt=0;
    vector<int>v;
    cin >> n >> m;
    for(int i=2;i<99999;i++)
        if(isprime(i))v.push_back(i);
    for(int i=n-1;i<=m-1;i++)
    {
        cout << v[i] << " ";
        cnt++;
        if(cnt%10==0)
            cout << endl;
    }
    
}