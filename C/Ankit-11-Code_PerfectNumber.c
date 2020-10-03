#include <stdio.h>

void main()
{
    int n, i, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        printf("Entered number is a Perfect Number.");
    else
        printf("Entered number is not a Perfect Number.");
    printf("\n");
}
