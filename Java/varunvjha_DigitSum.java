import java.util.*;
public class varunvjha_DigitSum {
	static int sum(int n) {
		int s = 0;
		while(n>0) {
			s = s+n%10;
			n=n/10;
		}
		return s;
	}
	
	public static void main(String []args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = in.nextInt();
		int s = sum(n);
		System.out.println("Sum of digits = "+s);
	}
}
