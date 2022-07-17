#include <stdio.h>
int main()
{
    int a,b,p;
    int * p1, * p2;
    scanf("%d,%d",&a,&b);
    p1=&a;
    p2=&b;
    if(a<b)
    {p= * p1; * p1= * p2; * p2=p;}
    printf("%d,%d", * p1, * p2);
    return 0;
    }
