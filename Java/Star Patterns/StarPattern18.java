public class StarPattern18 {

	public static void main(String[] args) {
		int n = 4;
		for(int i=0;i<n;i++) {
			for(int k=n-1;k>=i;k--) {
				System.out.print(" ");
			}
			for(int j=0;j<=i;j++) {
				System.out.print("* ");
			}
			System.out.println();
		}
		n=n-1;
		for(int i=0;i<n;i++) {
			System.out.print(" ");
			for(int k=0;k<=i;k++) {
				System.out.print(" ");
			}
			for(int j=n-1;j>=i;j--) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}

}

/* 

The output for the above program.

    * 
   * * 
  * * * 
 * * * * 
  * * * 
   * * 
    * 

*/
