/* Java program to check if a number is palindrome or not. The number is taken as input from the user*/

import java.io.*; 
import java.util.*; 

public class mcmonojit_palindrome 
{ 

	//function to reverse digits of the user inputed number
    static int reverseDigits(int num) 
    { 
        int rev_num = 0; 
        while (num > 0) 
        { 
            rev_num = rev_num * 10 + num % 10; 
            num = num / 10; 
        } 
        return rev_num; 
    } 
      
    //Function to check if n is a Palindrome number
    static int isPalindrome(int n) 
    { 
      
        int rev_n = reverseDigits(n); 
      
        if (rev_n == n) 
            return 1; 
        else
            return 0; 
    }  

    
    //main function
	public static void main(String args[])throws IOException 
    {
        BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the number to be checked : ");
        int n=Integer.parseInt(b.readLine());
        
        if(isPalindrome(n)==1) 
        { 
            System.out.println("Yes, "+n+" is a Palindrome number."); 
        } 
        else
            System.out.println("No, "+n+" is not a Palindrome number.");
        System.out.println(">>>>End of program>>>>");
 
	} 
} 

