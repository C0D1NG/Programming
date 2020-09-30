import java.util.*;
class Number{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        //Takes Number Input from User
        int n = in.nextInt();
        //If n=0, it is neither positive nor negative
        if(n==0){
            System.out.println("Neither Positive or Negative");
        }
        //Check if number greater than 0.
        else if(n>0){
            System.out.println("Positive");
        }
        //Else number is less than 0 
        else {
            System.out.println("Negative");
        }
    }
}