#include <stdio.h>
int main()
//菲薄纳切数列
{
    int i;
    int f[20]={1,1};
    for(i=2;i<20;i++)
    f[i]=f[i-1]+f[i-2];
    for(i=0;i<20;i++)
    {
    printf("%d ",f[i]);
    if((i+1)%5==0)
    printf("\n"); }
    return 0;
    //哪怕程序毫无问题，“%d ”很重要
}