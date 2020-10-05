#include<stdio.h>
#include<conio.h>
void Convert();
int main()
{
 clrscr();
 Convert();
 getch();
 return 0;
}
void Convert()
{
 int years=0,weeks=0,days;
 printf("Enter the number of days: ");
 scanf("%d",&days);
 years=days/365;
 weeks=(days%365)/7;
 days-=(years*365)+(weeks*7);
 printf("%d years,%d weeks and %d days",years,weeks,days);
 return;
}
