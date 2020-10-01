import java.util.Scanner;

public class addNumbers_nishiki97 {
    public static void main(String args[]){

        /**
         * @param number1, number2 - store values of the first number and the second number
         * @param sum - store the sumation of the number 1 and number 2
         */
        
        int number1;
        int number2;
        int sum;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter your 1st Number : ");
        number1 = scanner.nextInt();
        System.out.println("Enter your 2nd number : ");
        number2 = scanner.nextInt();

        scanner.close();

        sum = number1 + number2;

        System.out.println("Total of " + number1 + " and " + number2 + " is : "+ sum);
    }
}
