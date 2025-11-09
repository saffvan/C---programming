#include <stdio.h>
void main()
{
    long int n,rem,rev=0;
    printf("enter the number:");
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    while (rev>0)
    {
        n=rev;
        while (n>0)   
        {
            rem=n%10;
            printf("%ld",rem);
            n=n/10;
        }
        rev=rev/10;
        printf("\n");  
    }  
}   