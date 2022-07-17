#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
bool ispire(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    if(a%i==0)return false;
    return true;
}
int main()
{
    int a,b,count=0;
    vector<int>v;
    cin >> a >> b;
    for(int i=3;i<1000;i++)
    {
        if(ispire(i))
        {
            count++;
            if(count>=a)
            v.push_back(i);
        }
        if(count>b)
        break;
    }
    int i,cnt;
    for(i=0;i<v.size();i++)     
    {
        if((cnt+1)%10!=1)
        cout << " ";
        cout << v[i];
        cnt++;
        if(cnt%10==0)
        cout << endl;
    }
}