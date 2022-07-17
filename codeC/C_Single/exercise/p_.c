#include <stdio.h>
int main()
{
    void exchange(int * y,int x);
    printf("Please enter 3 integer numbers:");
    int * p,a[3];
    for(p=a;p<a+3;p++);
    scanf("%d",p);
    printf("Here are the answers:");
    exchange(a,3);
    for(p=a;p<a+3;p++)
    printf("%d ", * p);
    printf("\n");
    return 0;
}
void exchange(int * y,int x)
{
    int * z, * p,c;
    for(p=y;p<y+x;p++)
    for(z=p+1;z<y+x;z++)
    if( * z> * p)
    {c= * z; * z= * p; * p=c;}      //函数出了问题，无法实现由大到小排列
}
