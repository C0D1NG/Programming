import java.util.Scanner;

public class binaryToDecimal_nishiki97 {
    public static void main(String[] args) {
        
        /**
         * @toDecimal(number) - calling the inclass function in the main 
         * @param number - store user input value
         */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter binary number -> ");

        int number = scanner.nextInt();

        toDecimal(number);

        scanner.close();

        
    }

    //creating a method to convert binary number into decimal number
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
