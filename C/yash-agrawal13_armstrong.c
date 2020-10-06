#include <stdio.h>
#include <math.h>
int findLen(int num){
    int len=0;
    while(num!=0){
        num/=10;
        ++len;
    }
    return len;
}
int main() {
    int num, originalNum, remainder, len, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    len=findLen(num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += pow(remainder,len);
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}