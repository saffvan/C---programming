#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c,d;
    float x1,x2;
    printf("enter three coefficiants:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    if(d==0)
    {
        x1=-b/(2*a);
        printf("solution is:%f",x1);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("solutions are %f and %f",x1,x2);
    }
    else
    {
        printf("roots are imaginary");
    }
    
}