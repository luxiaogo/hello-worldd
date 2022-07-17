#include <stdio.h>
int main( )
{
    double a,b,c,t;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b)
    {t=a;
     a=b;
     b=t;  
    }
    if(b>c)
    {t=c;
     c=b;
     b=t;
     }
     if(a>c)
     {t=c;
      c=b;
      b=t;
     }
     printf("%lf,%lf,%lf\n",a,b,c);
     return 0;
}
