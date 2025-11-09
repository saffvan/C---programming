#include <stdio.h>
void main()
{
    int a[100],n,i,pos=0,neg=0,zero=0;
    printf("enter the total numbers:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        pos++;
        if(a[i]<0)
        neg++;
        if(a[i]==0)
        zero++;
    }
    printf("count of positives=%d",pos);
    printf("count of negatives=%d",neg);
    printf("count of zeros=%d",zero);
}