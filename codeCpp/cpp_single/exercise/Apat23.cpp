#include<iostream>
using namespace std;
int main()
{
    int a[10],h;
    for(int i=0;i<10;i++)
    a[i]=0;
    for(int i=0;i<10;i++){
    cin >> h;
    a[h]++;}
    if(a[0]==0){
    for(int j=0;j<10;j++)
    for(int h=0;h<a[j];h++)
    cout << a[j];}
    

}