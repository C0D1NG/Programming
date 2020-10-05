#include<stdio.h> 
#include<stdio.h>
#include<stdlib.h>  
int main(){  
int x,i,a[10];    
system ("cls");  
printf("Enter the number to be converted: ");    
scanf("%d",&x);    
for(i=0;x>0;i++)    
{    
a[i]=x%2;    
x=x/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  
