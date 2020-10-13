#include <stdio.h>
#include "math.h"


int fibonacci(int n) {
  if (n <= 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
  int i, count = 0;
  printf("Enter a positive number: ");
  scanf("%d", & count);
  printf("Fibonacci sequence:\n");
  for (i = 0; i < count; ++i) {
    printf("%d\n", fibonacci(i));
  }

  return 0;
}
