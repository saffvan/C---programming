#include<stdio.h>
int fact(int);
void main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,fact(num));
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}