#include<iostream>
using namespace std;
#include<math.h>
bool isprime(int a)
{
    for(int i = 2;i<sqrt(a);i++)
    if(a % i == 0)return false;
    return true;
}
int main()
{
    int N , count = 0;
    cin >> N;
    for(int i=5;i<N;i++)
    {if(isprime(i) && isprime(i-2))
     count++;}
     cout << count;
}