#include <stdio.h>
int is_prime(int);
void main()
{
    int a[20],i,flag=0,t;
    printf("enter the no:of elements:");
    scanf("%d",&t);
    printf("\nenter numbers to the array\n");
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }  
    printf("prime numbers in the array are\n");
    for(i=0;i<t;i++)
    {
        if(is_prime(a[i]))
        {
            printf("\t%d",a[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("nil");
    }
}
int is_prime(int n)
{
    int i;
    if(n==0 || n==1)
    return 0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}