import java.util.*;
class Palindrome{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int rev = 0;
        int a = n; // Copy value of number to a temporarily.
        int j;
        while(a>0)
        {
            j = a%10; 
            rev = rev*10 + j;
            a = a/10; 
        }
        //Checks if Reverse of Number is equal to Original Number
        if(rev==n){
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Not Palindrome");
        }
    }
}