#include <stdio.h>
#include <math.h>
void main()
{
    int start,end,n,num,sum,r,val;
    printf("enter the starting and ending values of the range:");
    scanf("%d%d",&start,&end);
    for(num=start;num<=end;num++)
    {
        val=num,n=0;
        while (val>0)
        {
            //count of digits
            n++;
            val=val/10;
        }
        val=num,sum=0;
        while(val>0)
        {
            //sum of powers
            r=val%10;
            sum=sum+pow(r,n);
            val=val/10;
        }
        if(sum==num)
        printf("%d\t",num);
    }
}