
#include <stdio.h>
#include <math.h>
int main()
{   int d,s=0,n,i=0,x;
    printf("Enter decimal number:");
    scanf("%d",&d);
    if(d>0){
    while(d)
    {
        x=pow(10,i);
        n=d%2;
        s+=(n*x);
        //printf("%d %d %d %d\n",x,d,n,s);
        d/=2;
        i++;
    }
    printf("Binary number is %d",s);
    }
    else
        printf("Enter number(not a fraction) greater than or equal to 1");
    return 0;

}
