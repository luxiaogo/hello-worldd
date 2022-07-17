#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
    int temp;
    if(a<b){
    temp=a;
    a=b;
    b=temp;}
    if(a<c){
    temp=a;
    a=b;
    b=temp;}
    return a;
}
int main()
{
    char x,y;
    int a[3],b[3],n;
    int c[3],d[3];
    cin >> n;
    for(int i=0;i<3;i++)
    a[i]=0;
    for(int i=0;i<3;i++)
    b[i]=0;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        if(x=='C')a[0]++;
        if(x=='J')a[1]++;
        if(y=='C')b[0]++;
        if(y=='J')b[1]++;
        if(y=='B')b[2]++;
        if(x=='B')a[2]++;
        if(x=='J' && y=='C')d[0]++;
        if(x=='J' && y=='B')c[1]++;
        if(x=='B' && y=='C')c[2]++;
        if(x=='B' && y=='J')d[1]++;
        if(x=='C' && y=='J')c[0]++;
        if(x=='C' && y=='B')d[2]++;
    }
    for(int i=0;i<3;i++)
    cout << a[i] << " ";
    cout << endl;
    for(int i=0;i<3;i++)
    cout << b[i] << " ";
    cout << endl;
    if(c[0]==max(c[1],c[0],c[2]))
    cout << 'C' << " ";
    if(c[1]==max(c[1],c[0],c[2]))
    cout << 'J' << " ";
    if(c[2]==max(c[1],c[0],c[2]))
    cout << 'B' << " ";
    if(d[0]==max(d[0],d[1],d[2]))
    cout << 'C';
    if(d[1]==max(d[0],d[1],d[2]))
    cout << 'J';
    if(d[2]==max(d[0],d[1],d[2]))
    cout << 'B';
}