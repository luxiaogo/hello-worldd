#include<iostream>
#include<cctype>
#include<algorithm>
#include<cmath>
using namespace std;
long long convert(string s,long long radix)
{
    int sum=0,temp,index=0;
    for(auto it=s.rbegin();it!=s.rend();s--)
    {
        temp=isdigit(*it)?*it-'0':*it-'a'+10;
        sum+=temp*pow(radix,index++);
    }
}
long long find_radix(string s,long long num;)
{
    char c=*max_element(s.begin(),s.end());
    long long low=(isdigit(c)?c-'0':c-'a'+10)+1;
    long long high=max(low,num);
    while(low<=high)
    {
        mid=(low+high)/2;
        long long t=convert(s,mid);
        if(t>num||t<0)high=mid-1;
        else if(t==num)return mid;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    //result_radix=tag==1?find_radix(n1,convert(n2,radix)):find_radix(n2,convert(n1,radix));
}