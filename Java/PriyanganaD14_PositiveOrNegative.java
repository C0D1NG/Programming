import java.util.Scanner;

/**
 * PriyanganaD14_PositiveOrNegative
 */
public class PriyanganaD14_PositiveOrNegative {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter any number : ");
        int n=sc.nextInt();

        if(n<0){
            System.out.println(n+" is a negative number");
        }
        else{
            System.out.println(n+" is a positive number");
        }

        sc.close();
    }
}