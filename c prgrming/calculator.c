#include <stdio.h>
#include <math.h>
void main()
{
    int n1,n2,choice1,choice2,x;
    printf("enter two integers:");
    scanf("%d%d",&n1,&n2);
    printf("select a operation\n 1.addition\n 2.subtraction\n 3.multiplication\n 4.divition\n 5.modulus\n");
    scanf("%d",&choice1);
    switch (choice1)
    {
    case 1: printf("%d+%d=%d",n1,n2,n1+n2);
        break;
    case 2:printf("%d-%d=%d",n1,n2,n1-n2);
        break;
    case 3: printf("%dx%d=%d",n1,n2,n1*n2);
        break;
    case 4:
        if(n2==0)
        printf("divided by 0 is not possible");
        else
         printf("%d/%d=%f",n1,n2,(float)n1/n2);
        break;
    case 5:printf("%d mod %d = %d",n1,n2,n1%n2);
        break;
    default:printf("invalid operation");
    }
}