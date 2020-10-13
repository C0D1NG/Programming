#include<stdio.h>  
int main(){  
    int binary[10], number, iter;
    printf("Enter a decimal number: ");    
    scanf("%d" , &number);  
    iter = 0;
    while(number > 0)    
    {    
        binary[iter] = number % 2;    
        number = number / 2; 
        iter++;
    }    
    printf("\nBinary: ");    
    for(iter = iter - 1 ; iter >= 0 ; iter--)    
        printf("%d",binary[iter]);    
    return 0;  
}