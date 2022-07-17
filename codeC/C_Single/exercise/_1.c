#include <stdio.h>
#include <math.h>
//这是一个求一百至两百间所有质数的程序
int main()
{
    int i,n,k,m=0;
    for(i=101;i<=200;i=i+2)
   { k=sqrt(i);
    for(n=2;n<=k;n++)
    if(i%n==0)break;
    if(n==k+1)
   { printf("%d ",i);
    m=m+1;}
    if(m%10==0)
    printf("\n");}
    return 0;
}                         //大括号要打好！


    

