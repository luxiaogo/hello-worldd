#include<iostream>
#include<math.h>
using namespace std;
int arr[1000];
bool ispire(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    if(a%i==0)return false;
    return true;
}
int main()
{
    int a,b,count=0;
    cin >> a >> b;
    for(int i=3;i<1000;i++)
    {
        if(ispire(i))
        {
            count++;
            if(count>=a)
            arr[i]=i;
        }
        if(count>b)
        break;
    }
    int i,cnt;
    for(i=0;i<1000;i++)
    {
    while(arr[i]!=0)
   {
       cout << arr[i];
       cnt++;
       if(cnt%10==0)
       cout << endl;
       else
       cout << " ";
       i++;
   }
    }
}                          
   
   
   
   
