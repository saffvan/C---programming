#include<stdio.h>
void main()
{
    int a[20][20],i,j,m,n;
    printf("enter the order of matrix:");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            a[i][j]=1;
            else if(i<j)
            a[i][j]=-1;
            else
            a[i][j]=0;
        }
    }
    printf("matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}