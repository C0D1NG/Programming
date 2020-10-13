#include<stdio.h>
void main()
{
 int n,i,sum=0;
 printf("Enter the no. to check whether it is a perfect number or not\n");
 scanf("%d",&n);
 for(i=1;i<n;i++)
 {
     if(n%i==0)
     {
         sum=sum+i;
     }
 }
     if(sum==n)
        printf("%d is a perfect number",n);
     else
        printf("%d is not a perfect number",n);
}
