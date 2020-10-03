package Day8;
//Bubble Sorting in Java

import java.util.Arrays;
import java.util.Scanner;

public class dayEighth {
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number of elements: ");
		int n=sc.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter the elements of Array: ");
		
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		
		for(int i=0;i<n-1;i++){
		    for(int j=0;j<n-i-1;j++){
		        if(arr[j]>arr[j+1]){
		            int temp=arr[j];
		            arr[j]=arr[j+1];
		            arr[j+1]=temp;
		        }
		    }
		}
		System.out.print("Sorted Array: ");
		for(int i=0;i<n;i++) {
			System.out.print(arr[i]+" ");
		}
	}
}
