#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int arr[10000];
bool cmp(int&a,int&b)
{
    return a>b;
}
int main()
{
    int k,n,flag=0;
    cin >> k;
    vector<int>v(k);
    for(int i=0;i<k;i++){
    cin >> n;
    v[i] = n;
    while(n!=1)
    {
        if(n%2!=0)
        n=n*3+1;
        n=n/2;
        if(arr[n] == 1)break;
        arr[n] = 1;
    }}
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<k;i++)
    {
        if(arr[v[i]] == 0)
        {
            if(flag == 1)
            cout << " ";
            cout << v[i];
            flag =1;
        }
    }
}