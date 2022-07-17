#include <stdio.h>
//!函数嵌套
int fac(int c)
{   int n;
    if(c<0)
    printf("data error!");
    else if(c==1||c==0)
    n=1;
    else
    n=fac(c-1)*c;
    return(n);
    }

int main()
{   int fac(int c);
    int a,b;
    printf("写出一个数，我让他能！\n");
    scanf("%d",&a);
    b=fac(a);
    printf("%d",b);
    return 0;
}