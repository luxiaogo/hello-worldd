#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool isprime(int a)
{
    for(int i=1;i<sqrt(a);i++)
    if(a%i==0)return false;
    return true;
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>v;
    
}