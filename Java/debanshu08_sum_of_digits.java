import java.util.*;
class Sum{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int sum = 0;
        int a;
        if(n<0){
            a = -n; // If number is negative make a positive copy of it.
        }
        else {
             a = n; // If positive make copy as it is.
        }
        int j;
        while(a>0)
        {
            j = a%10; 
            sum = sum + j;
            a = a/10; 
        }
        System.out.println("Sum of digits of  number is "+sum);
    }
}