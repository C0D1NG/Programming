import java.util.Scanner;

public class harshguptahg007_hcf {

    public static void main(String args[]){

        int n1, n2, hcf = 0;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st Number : ");
        n1 = sc.nextInt();
        System.out.println("Enter 2nd number : ");
        n2 = sc.nextInt();

        int lower = n1 < n2 ? n1: n2;

        for(int i = 1; i <= lower; i++) {
            if(n1%i == 0 && n2%i == 0 )
                hcf = i;
        }

        System.out.println("HCF of given two numbers " + n1 + " and " + n2 + " is : "+ hcf);
    }
}
