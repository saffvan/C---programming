#include <stdio.h>
void main()
{
    int a[10],s,n,i,found;
    printf("enter the size of arrray:");
    scanf("%d",&s);
    printf("enter the elements of array:");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to check is in array:");
    scanf("%d",&n);
    for(i=0;i<s;i++)
    {
        if(n==a[i])
        {
            found=1;
            break;
        }
    }
    if(found)
    printf("%d is found at the location %d in the array",n,i+1);
    else
    printf("%d is not found in the array",n);

}