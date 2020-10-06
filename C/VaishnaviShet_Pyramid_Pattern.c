#include<stdio.h>

void main(){
  int i, j, k, row;
  
  printf("Enter no of rows: ");
  scanf("%d",&row);
  
  for (i =1; i<=row; i++){
      for (j=0; j<row-i; j++){
          printf(" ");
      }
      for (k = 1; k<=(i*2)-1; k++){
          printf("*");
      }
      printf("\n");
  }
  
}


/* The output of the program is :

Enter no of rows: 4
   *
  ***
 *****
*******

*/
