#include <stdio.h>
void inv(int a[],int n)
{   int * p,i,t;
    for(p=(a+n-1),i=0;p>=a;p--,i++)
    {t=a[i];a[i]= * p; * p=t;}
}
int main()
{   void inv(int a[],int n);
    int * p,f[10]={1,2,3,4,5,6,7,8,8,9};
    inv(f,10);
    for(p=f;p<f+10;p++)
    printf("%d ", * p);
}