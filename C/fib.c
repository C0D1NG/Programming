#include<stdio.h>
int main()
{
    int n1=0,n2=1,i,number;
    printf("Enter number of elements:");
    scanf("%d",&number);
    printf("\n%d%d",n1,n2);
    for(i=2;i<number;++i)
    {
        n3=n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}