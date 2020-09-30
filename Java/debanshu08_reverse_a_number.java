import java.util.*;
class Reverse{
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
        System.out.println("Reverse of Number is "+rev);
    }
}