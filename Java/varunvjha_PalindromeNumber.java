import java.util.Scanner;

/**
 * 
 */

/**
 * @author Varun Vaibhav Jha
 *
 */
public class varunvjha_PalindromeNumber {

	/**
	 * @param args
	 */
	
	static boolean palindrome(int n) {
		int r = 0, rev = 0;
		int i = n;
		while(i>0) {
			r = i%10;
			rev = rev*10+r;
			i=i/10;
		}
		if(n==rev)return true; 
		return false;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = in.nextInt();
		boolean f = palindrome(n);
		if(f)System.out.println(+n + " is a Palindromic Number");
		else System.out.println(+n + " is not a Palindromic Number");
	}

}
