#include <stdio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],m,n,p,q,k,i,j,sum;
    printf("enter the order of first matrix:");
    scanf("%d%d",&m,&n);
    printf("enter the order of second matrix:");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("enter the %d elements of first matrix:",m*n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter the %d elements of second matrix:",p*q);
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                sum=0;
                for(k=0;k<n;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                    c[i][j]=sum;
                }
            }
        }
        printf("fisrt matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
         printf("second matrix\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
         printf("result  matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        } 
    }
    else
    {
        printf("matrix multiplication not possibe");
    }
}