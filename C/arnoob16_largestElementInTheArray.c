#include <stdio.h>
int main() {

    // Input the size of array
    printf("Enter the size of the array\n");
    int size; 
    scanf("%d", &size);

    // Declare an array
    int array[size];

    //Array Input
    printf("Enter the array element separated by spaces\n");
    for(int i=0; i<size;i++){
        //Input 1 element
        scanf("%d", &array[i]);
    }

    //Assuming 1st element is max
    int max = array[0];

    for(int i=0;i<size;i++){
        //Compare the element with the previous max element and assign it to max if a greater value is found.
        if(array[i] > max){
            max = array[i];
        }
    }
    //Print the max value with a suitable message.
    printf("The maximum element of the given array is : %d", max);
	return 0;
}