#include<stdio.h>


int facto(int n){
    if(n<=1){
        return 1;
    }
    else{
        return facto(n-1)*n;
    }
}


int main(){

    int val,temp,check;
    check=0;
    

    printf("Enter the number ");
    scanf("%d",&val);
    temp=val;
    while(val!=0){
        
        check+=facto(val%10);
        val=val/10;       



    }
    
    if(check==temp){
        printf("It is a strong  number");

    }
    else{
        printf("It is not a strong number");
    }

    

    return 0;


}