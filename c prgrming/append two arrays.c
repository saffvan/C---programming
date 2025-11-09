#include <stdio.h>
void main()
{
    int a[10],b[10],c[20],i,na,nb;
    printf("enter the size of first array:");
    scanf("%d",&na);
    printf("enter the elements of first array:");
    for(i=0;i<na;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array:");
    scanf("%d",&nb);
    printf("enter the elements of second array:");
    for(i=0;i<nb;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<na;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<nb;i++)
    {
        c[na+i]=b[i];
    }
    printf("appended array is:");
    for(i=0;i<na+nb;i++)
    {
        printf("%d\t",c[i]);
    }
}