#include <stdio.h>
#include <math.h>
void main()
{
    int n,a[20],sum=0,mean,i;
    float sd;
    printf("enter the count of cumbers:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    mean=sum/n;
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+((a[i]-mean)*(a[i]-mean));
    }
    sd=sqrt(sum/n);
    printf("standerd deviation is %f",sd); 
}