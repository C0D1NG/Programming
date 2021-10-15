// program to reverse an array
//created by azad singh



import java.lang.*;
import java.util.*;

public class ReverseArray{
    public static void main(String[] args){

        System.out.println("Enter the size of the array: ");
        Scanner in = new Scanner(System.in);

        int size = in.nextInt();

        int[] arr = new int[size];
        for(int i = 0;i<arr.length;i++){
            arr[i]=in.nextInt();
        }
        
        Reverse(arr,0,size-1);

        System.out.println(Arrays.toString(arr));
    }

    static void Reverse(int[] arr,int start,int end){

        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
      

    }

       
}
