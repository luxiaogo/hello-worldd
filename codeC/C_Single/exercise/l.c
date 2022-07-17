#include <stdio.h>
#include <stdlib.h>
int main()
{
    void check(int * p);
    int i, * p=(int * )malloc(5 * sizeof(int));
    for(i=0;i<5;i++)
    scanf("%d",p+i);
    check(p);
    return 0;
}
void check(int * p)
{
    int i;
    printf("They are failed:");
    for(i=0;i<5;i++)
    if(p[i]<60) printf("%d ",p[i]);
}