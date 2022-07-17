#include <stdio.h>
int main()
{
    void inv(int * x,int n);
    int i,a[10]={1,2,3,4,56,6,7,8,9,5};
    printf("The original array:\n");
    for(i=0;i<10;i++)   //for(p=a;p<a+10;p++)
    printf("%d",a[i]);  //printf("%d", * p)
    printf("\n");
    inv(a,10);
    printf("Look:");
    for(i=0;i<10;i++)
    printf("%d",a[i]);
}
 
    void inv(int * x,int n);
    {
        int * p,temp, * j,m=(n-1)/2;
    }