#include<iostream>
using namespace std;
int main()
{
    string A,B;
    int DA,DB;
    cin >> A >> DA >> B >> DB;
    int cnta=0,cntb=0;
    for(int i=0;i<A.length();i++)
    if(DA==(A[i]-'0'))cnta++;
    for(int i=0;i<B.length();i++)
    if(DB==(B[i]-'0'))cntb++;
    int suma,sumb;
    suma=DA;
    sumb=DB;
    for(int i=0;i<cnta;i++)
    suma=10*suma + suma;
    for(int i=0;i<cntb;i++)
    sumb=10*sumb + sumb;
    int sum=suma+sumb;
    cout << sum;
}