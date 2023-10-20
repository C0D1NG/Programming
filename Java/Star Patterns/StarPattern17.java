public class StarPattern17 {

	public static void main(String[] args) {
		int n=4;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j<=i;j++) {
				System.out.print("* ");
			}
			for(int space=1;space<2*(n-1-i);space++) {
				System.out.print("  ");
			}
			for(int k=0;k<=i;k++) {
				System.out.print("* ");
			}
			System.out.println();
		}
		for(int i=1;i<(2*n);i++) {
			System.out.print("* ");
		}
		System.out.println();
		for(int i=0;i<n-1;i++) {
			for(int j=n-1;j>i;j--) {
				System.out.print("* ");
			}
			for(int space=0;space<=2*i;space++) {
				System.out.print("  ");
			}
			for(int k=n-1;k>i;k--) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}

}

/* 

The output for the above program.

*           * 
* *       * * 
* * *   * * * 
* * * * * * * 
* * *   * * * 
* *       * * 
*           *

*/

