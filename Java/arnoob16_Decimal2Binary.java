import java.util.*;
public class arnoob16_Decimal2Binary {
    public static void main(String[] args){
        // Made a Scanner Object
        Scanner in = new Scanner(System.in);

        // Took the value to be converted as an user input
        System.out.println("Enter the number to convert it to Binary");
        int number = in.nextInt();

        // Displayed the converted binary with a suitable message
        System.out.println("The Binary of "+ number + " is : " + Integer.toBinaryString(number));
        in.close();
    }
}