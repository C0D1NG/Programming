import java.util.Scanner;

/**
 * 
 */

/**
 * @author Varun Vaibhav Jha
 *
 */
public class varunvjha_ReverseNumber {

	/**
	 * @param args
	 */
	
	static int reverse(int n) {
		int r = 0, rev = 0;
		while(n>0) {
			r = n%10;
			rev = rev*10+r;
			n=n/10;
		}
		return rev;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = in.nextInt();
		int r = reverse(n);
		System.out.println("Reverse of " +n + " = "+r);

	}

}
