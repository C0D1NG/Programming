import java.util.Scanner;

public class DecimalConversion {

    public static void main(String args[]) {
        // TODO code application logic here
        Scanner ip = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int num = ip.nextInt();
        int i,n = num,j=0;
        String binary="",str,octal="",hexa="";
        
        // for binary
        while(n>0){
            n = (int) (num/(Math.pow(2, j++)));
            i = n%2;
            str = Integer.toString(i);
            binary = str.concat(binary);
        }
        System.out.println("The binary representation of " + num + " is " + binary);
        
        // for Octal
        j=0;
        n=num;
        while(n>0){
            n = (int) (num/(Math.pow(8, j++)));
            i = n%8;
            str = Integer.toString(i);
            octal = str.concat(octal);
        }
        System.out.println("The Octal representation of " + num + " is " + octal);
        
        // for hexadecimal
        j=0;
        n=num;
        char ch;
        while(n>0){
            n = (int) (num/(Math.pow(16, j++)));
            i = n%16;
            if(i>9){
                i = i + 55;
                ch =(char)i;
                str = Character.toString(ch);
            }
            else{
                str = Integer.toString(i);
            }
            hexa = str.concat(hexa);
        }
        System.out.println("The Hexadecimal representation of " + num + " is " + hexa);
    }
}
