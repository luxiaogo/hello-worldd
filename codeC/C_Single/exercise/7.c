#include <stdio.h>
int main()
//!数列
{
    int a,i,b=1;
    printf("请输入您想要使用的数据:\n");
    scanf("%d",&i);
    if(i<0)
    printf("你是傻逼");
    else
    {for(a=1;a<=i;a++)
    {
        b=a*b;
    }
        printf("%d",b);}
}   