#include <stdio.h>
void main()
{
    int a[8]={500,100,50,20,10,5,2,1},amount,n,i;
    printf("enter the amount:\n");
    scanf("%d",&amount);
    n=amount;
    for(i=0;i<8;i++)
    {
        if(n/a[i]>0){
        printf("%d notes=%d\n",a[i],n/a[i]);
        n=n%a[i];
        }
    }
}