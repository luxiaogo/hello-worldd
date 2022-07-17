#include<iostream>
using namespace std;
int h[101],n;
void swap(int a,int b)
{
    int t;
    t=h[a];
    h[a]=h[b];
    h[b]=t;
}
void siftdown(int i)
{
    int t,flag=0;
    while(i*2<=n && flag==0)
    {
        if(h[2*i]<h[i])
        t=2*i;
        t=i;
        if(h[2*i+1]<h[t])
        t=2*i+1;
        if(t==i)
        flag=1;
        swap(t,i);
        i=t;
    }
}
void creat()
{
    for(int i=n/2;i>0;i--)
    {
        siftdown(i);
    }
}
void heapsort()
{
    while(n>1)
    {
        swap(1,n);
        n--;
        siftdown(1);
    }
}
int deletemax()
{
    int t;
    t=h[1];
    h[1]=h[n];
    n--;
    siftdown(1);
    return t;
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    cin >> h[i];
    creat();
    heapsort();
}