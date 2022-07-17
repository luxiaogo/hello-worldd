#include <stdio.h>
int main()
{
    int average(int f[],int n);
    printf("input 10 scores:");
    int f[n],i,m,n;
    for(i=0;i<n;i++)
    scanf("%d",&f[i]);
    printf("input the number you need to use:");
    scanf("%d",&n);
    m=average(f,n);
    printf("%d",m);

}
int average(int f[],int n)
{
    int y,z,w;
    for(y=0,z=0;y<n;y++)
    z=z+f[y];
    w=z/n;
    return(w);
}