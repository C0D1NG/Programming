
#include <stdio.h>
#include <math.h>
int main()
{   printf("-----Factorial using recursion---\n");
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    printf("The factorial is %d",factrl(x));
    return 0;
}
int factrl(int a)
{
    if(a>=1)
    return a* factrl(a-1);
    else
    return 1;
}
