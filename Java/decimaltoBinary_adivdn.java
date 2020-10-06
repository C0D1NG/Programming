import java.util.Scanner;
public class code{
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your decimal number : ");
        int n = sc.nextInt();
        System.out.println();
        int[] binary = new int[n];
        int i = 0;
        System.out.print("Decimal to Binary from "+n+ " = ");
        while(n > 0){
            binary[i] = n % 2;
            n = n/2;
            i++;
        }
        
        for(int j = i -1; j >=0; j--){
            System.out.print(binary[j]);
        }
        System.out.println();
    }
}