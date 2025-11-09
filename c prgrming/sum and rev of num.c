#include <stdio.h>
void main()
{
    int num,sum=0,rem,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("sum of the digit is=%d",sum);
    printf("\n reverse of the number is %d",rev);
}