#include<iostream>
#include<algorithm>
#include<cctype>
#include<cmath>
using namespace std;
long long convert(string s,long long radix)
{
    long long sum=0;
    int index=0,temp=0;
    for(auto it=s.rbegin();it!=s.rend();it--)
    {
        temp=isdigit(*it)?*it-'0':*it-'a'+10;
        sum+=temp*pow(radix,index++);               //开始肯定是零次方
    }
    return sum;
}
long long find_radix(string s,long long num)    //二分查询
{
    char it=*max_element(s.begin(),s.end());
    long long low=isdigit(it)?it-'0':it-'a'+10;
    long long high=max(num,low);
    while(high>low)
    {
        long long mid=(high+low)/2;
        long long t=convert(s,mid);
        if(t>num || t<0)high=mid+1;
        else if(t==num)return mid;
        else low=mid-1;
    }
    return -1;
}
int main()
{
    long long radix,result_radix;
    string n1,n2;
    int tag;
    cin >> n1 >> n2 >> tag >> radix;
    result_radix=tag==1?find_radix(n2,convert(n1,radix)):find_radix(n1,convert(n2,radix));
    if(result_radix==-1)cout << "Impossible";
    else cout << result_radix;
    return 0;
}