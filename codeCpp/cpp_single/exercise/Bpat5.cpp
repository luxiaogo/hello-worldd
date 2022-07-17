#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
bool cmp(int a,int b)
{return a>b;}
int main()
{
    int n,flag=0;
    int c;
    cin >> c;    
    vector<int>v(c);
    int arr[10000]={0};
    for(int i=0;i<c;i++)
    {
        cin >> n;
        v[i]=n;
    }
    for(int i=0;i<n;i++)
    {
        while(n!=1)
        {
            n=v[i];
            if(n%2==0)
            {
                n /= 2;
                arr[n]=1;
            }
            n = 3 * n + 1;
            arr[n]=1;
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++)
        {
            if(arr[i]==0)
            {
                if(flag==1)
                cout << " ";
                cout << v[i];
                flag=1;
            }
        }
    }
}
