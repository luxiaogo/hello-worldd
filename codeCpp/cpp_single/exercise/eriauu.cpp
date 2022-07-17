#include<iostream>
using namespace std;
int h[101],n;
void swap(int x,int y)
{
    int t;
    t=h[x];
    h[x]=h[y];
    h[y]=t;
}
void siftdown(int i)
{
    int t,flag=0;
    while(flag==0 && 2*i<=n)
    {
        if(h[2*i]<h[i])
        t=2*i;
        else t=i;
        if(t*2+1<=n){
        if(h[t]>h[2*i+1])
        t=2*i+1;}
        if(i==t)
        flag=1;
        if(i!=t)
        {
            swap(i,t);
            i=t;
        }
    }
}
void siftup(int i)
{
    int flag=0;
    if(i==1)return;
    while(i!=1 && flag==0)
    {
        if(h[i]<h[i/2])
        {
            swap(i,i/2);
        }
        else flag=1;
        i=i/2;
    }
}
void creat()
{
    for(int i=n/2;i>=1;i--)
    {
        siftdown(i);
    }
}
int deletemin()
{
    int t=h[1];
    h[1]=h[n];
    n--;
    siftdown(1);
    return t;
}

int main()
{
    int num;
    cin >> num;
    for(int i=1;i<=num;i++)
    cin >> h[i];
    n=num;
    creat();
    for(int i=1;i<=num;i++)
    cout << deletemin() << " ";
}