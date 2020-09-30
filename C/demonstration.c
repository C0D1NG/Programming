#include <stdio.h>
#include <conio.h>

int main() {

    int i = 3;
    int *j; //Pointer
    int **k; //Pointer to a Pointer

    j = &i;
    k = &j;

    printf("Address of i = %u\n", &i);
    printf("Address of i via j = %u\n", j);
    printf("Address of i via k = %u\n", *k);
    printf("Address of j = %u\n", &j);
    printf("Address of j via k = %u\n", k);
    printf("Address of k = %u\n", &k);

    printf("Value of j = %u\n", j);
    printf("Value of k = %u\n", k);
    printf("Value of i = %d\n", i);
    printf("Value of i via VAAATAO operation = %d\n", *(&i));
    printf("Value of i via j = %d\n", *j);
    printf("Value of i via k = %d\n", **k);






    return 0;
}
