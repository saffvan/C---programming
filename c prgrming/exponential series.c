#include <stdio.h>
void main()
{
    int n,i,x;
    float sum=1,t=1;
    printf("ente the value of x:");
    scanf("%d",&x);
    printf("enter the no:of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=t*x/i;
        sum=sum+t;
    }
    printf("exponential of %d=%f",x,sum);
}