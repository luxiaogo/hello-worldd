#include <stdio.h>
int main()
{
    void sort(int x[],int n);
    int * p,a[10];
    printf("Please enter 10 numbers:");
    p=a;
    for(p=a;p<a+10;p++)
    scanf("%d",p);
    p=a;
    sort(p,10);
    for(p=a;p<a+10;p++)
    printf("%d ", * p);
}
void sort(int x[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    if(x[j]>x[i])
    {t=x[i];x[i]=x[j];x[j]=t;}
    
    
    
    
}