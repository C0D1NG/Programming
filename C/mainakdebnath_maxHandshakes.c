#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of people:");
    scanf("%d", &num);
    int total = num * (num - 1) / 2;
    printf("The total number of handshakes is %d", total);
    return 0;
}