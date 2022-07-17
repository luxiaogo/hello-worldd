#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
int n;
void quicksort(int left,int right)
{
    if(left>right)
    return;
    int i,j,t,temp;
    i=left;
    j=right;
    v[left]=temp;
    while(i!=j)
    {
    while(v[j]>=temp && i<j)
    j--;
    while(v[i]<=temp && i<j)
    i++;
    if(i<j)//可能不需要
    {
        t=v[i];
        v[i]=v[j];
        v[j]=t;
    }
    }
    v[left]=v[i];
    v[i]=temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
}
int main()
{
    void quicksort(int left,int right);
    int i;
    cin >> n;
    for(i=1;i<=n;i++)
    cin >> v[i];
    quicksort(1,n);
    for(i=1;i<=n;i++)
    cout << v[i];
}