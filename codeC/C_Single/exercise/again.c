# include <stdio.h>
# include <math.h>
int main()
{
    double a,b,c,p,q,disk,x1,x2;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    disk=b*b-4*a*c;
    if(disk<0)
      printf("This equotion hasn't right roots\n");
    else
    {p=-b/(2.0*a);
     q=sqrt(disk)/(2.0*a);
     x1=p+q;
     x2=p-q;
     printf("real roots:\nx1=%7.2f\nx2=%7.2f\n",x1,x2);
    }  
    return 0;
}
