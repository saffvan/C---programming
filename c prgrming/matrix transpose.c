#include <stdio.h>
void main()
{
    int a[20][20],i,j,m,n,trans[20][20];
    printf("enter the order of matrix:");
    scanf("%d%d",&m,&n);
    printf("enter the  %d elements of the matrix:",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            trans[i][j]=a[j][i];
        }
    }
    printf("matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of the matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
}