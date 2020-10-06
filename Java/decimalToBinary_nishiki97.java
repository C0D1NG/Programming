import java.util.Scanner;

public class decimalToBinary_nishiki97 {
    public static void main(String[] args) {
        
        /**
         * @toBinary(number) - calling the inclass function in the main 
         */

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter decimal number -> ");

        int number = scanner.nextInt();

        toBinary(number);

        scanner.close();

        
    }

    //creating a method to convert binary number into decimal number
    public static void toBinary(int decimalNum){    
        
        int binary[] = new int[40];    
        
        int index = 0;    
       
        while(decimalNum > 0){    
          binary[index++] = decimalNum%2;    
          decimalNum = decimalNum/2;    
        }    
        
        for(int i = index-1;i >= 0;i--){    
          System.out.print(binary[i]);    
        }    
   
        System.out.println();
   }    
}
