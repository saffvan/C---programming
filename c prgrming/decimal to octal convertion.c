#include <stdio.h>
#include <string.h>
void main()
{
    int n,t,i,rem;
    char x[20];
    printf("enter a decimal number:");
    scanf("%d",&n);
    for(t=n,i=0;t!=0;i++)
    {
        rem=t%8;
        if(rem<10)
        x[i]=rem+'0';
        else x[i]=rem+55;
        t=t/8;
    }
    strrev(x);
    printf("\ndecimal no %d converted to octal is %s",n,x);
}