#include<stdio.h>

int main()
{
int i,a[10],b;

printf("Enter the elements of array\n");
for(i=0;i<=9;i++)
{
    scanf("%d",&a[i]);
}
b=a[0];

for(i=1;i<=9;i++)
{
    if(b<a[i])
    b=a[i];

}
printf("Largest element in the array is %d",b);
return 0;
}
