#include<stdio.h>
int main()
{
    int r,n,sum=0;temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
    return 0;
}