#include <stdio.h>
int main()
{
    int a[3][4]={2,2,2,2,3,3,3,3,4,4,4,4};
    int( * p)[4],i,n;
    printf("Please enter the line and column!\n");
    scanf("%d,%d",&i,&n);
    p=a;
    printf("%d", * ( * (p+i)+n));
}