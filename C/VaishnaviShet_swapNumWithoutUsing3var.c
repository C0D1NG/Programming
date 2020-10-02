//Swap two numbers without using third variable

#include<stdio.h>

void main(){
int num1, num2; 
printf("Enter First number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d", &num2);

printf("Before swaping, the numbers are %d %d\n", num1, num2);

num1 = num1+num2;
num2 = num1-num2;
num1 = num1-num2;

printf("After swaping, the numbers are %d %d ", num1, num2);
 
}

/* OUTPUT

Enter First number: 5
Enter second number: 3
Before swaping, the numbers are 5 3
After swaping, the numbers are 3 5

*/
