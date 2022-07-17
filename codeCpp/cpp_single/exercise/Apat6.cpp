#include<iostream>
using namespace std;
#include<math.h>
int arr[10000];
int main()
{
    int N,k,h=0;
    cin >> N;
    for(int i=3;i<=N;i += 2)
    {
        for(int a=2;a<sqrt(i);a++)
        {
            if(i % a == 0)break;
            {arr[h]=i;
                 h++;}
        }
    }
    for(int i=0;i<h;i++)
    {
        if(arr[i+1]-arr[i] == 2)
        k++;
    }
    cout << k;
}