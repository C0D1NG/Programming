import java.util.Scanner;

/**
 * Program :- Fibonnaci series
    Written by :- Sunil Kumar Panda
    Github user name :- Sunil200228
    Github Link :- https://github.com/Sunil200228
 */
public class fib {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n,prev=0,pres=1,next;
        
        System.out.print("Enter the range: ");
        n=in.nextInt();

        System.out.print("Series is :\n0 1 ");
        next=prev+pres;

        for(int i=2;i<n;prev=pres,pres=next,next=prev+pres,i++)
            System.out.print(next+ " ");

        in.close();
    }
}