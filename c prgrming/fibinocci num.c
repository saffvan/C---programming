#include <stdio.h>
void main()
{
    int a=0,b=1,c,i,l;
    printf("Enter the limit:");
    scanf("%d",&l);
    for(i=0;i<=l;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        
    }
}