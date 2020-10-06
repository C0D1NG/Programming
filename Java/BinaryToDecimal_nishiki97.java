import java.util.Scanner;

public class BinaryToDecimal_nishiki97{
    public static void main(String[] args) {
        
        /**
         * @param number - to store user input for binary number
         */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your binary number : ");
        int number = scanner.nextInt();
        
        scanner.close();

        System.out.print("decimal number is : "+toDecimal(number));
        
    }
    //method to convert binary into decimal form

    public static int toDecimal(int binaryNum){  
        
        int decimal = 0;  
        
        int n = 0;  
        
        while(true){  
          if(binaryNum == 0){  
            break;  
          } else {  
              int temp = binaryNum%10;  
              decimal += temp*Math.pow(2, n);  
              binaryNum = binaryNum/10;  
              n++;  
           }  
        }  
        return decimal;  
    }  
}