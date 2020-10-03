import java.util.*;
public class arnoob16_largestElementInTheArray{
    public static void main(String[] args){
        // Made a Scanner Object
        Scanner in = new Scanner(System.in);

        // Input the size of array
        System.out.println("Enter the size of the array");
        int n = in.nextInt();

        // Declare an array
        int ar[] = new int[n];

        //Assign the min value possible to max variable
        int max = Integer.MIN_VALUE;

        //Array Input
        System.out.println("Enter the array element separated by spaces");
        for(int i=0;i<n;i++){
            //Input 1 element
            ar[i] = in.nextInt();

            //Compare the element with the previous max element and assign it to max if a greater value is found.
            if(max < ar[i])
                max = ar[i];
        }
        //Print the max value with a suitable message.
        System.out.println("The maximum element of the given array is : " + max);

        //Closing the scanner object to avoid un-necessary errors in IDE 
        in.close();
    }
}