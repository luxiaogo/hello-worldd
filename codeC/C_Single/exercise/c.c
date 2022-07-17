#include <stdio.h>
#include <math.h>
int main()
{   int max(int x,int y);
    printf("Please enter 10 integer numbers:");
    int i,f[10],m,n;
    for(i=0;i<10;i++)
    scanf("%d",&f[i]);
    printf("\n");
    for(i=0,m=f[0];i<10;i++)
    if(max(m,f[i])>m)
    {m=max(m,f[i]);
    n=i;}
    printf("The largest number is %d\nIt is the %dth number",m,n+1);
    }
    int max(int x,int y)
  {  return(x>y? x:y);
  }
    