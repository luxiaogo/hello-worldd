#include <stdio.h>
int main()
{
    int a[10], * p;
    printf("Please input 10 integer numbers:");
    for(p=a;p<(a+10);p++)
    scanf("%d",p);
    for(p=a;p<(a+10);p++)
    printf("%d", * p);
    printf("\n");
    return 0;
}