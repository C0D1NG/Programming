public class StarPattern22 {

	public static void main(String[] args) {
		int n=4;
		for(int i=0;i<n;i++) {
			for(int j=0;j<=i;j++) {
				System.out.print(" ");
			}
			for(int k=n-1;k>=i;k--) {
				if(i==0 || k==n-1 || k==i) {
					System.out.print("* ");
				} else {
					System.out.print("  ");
				}
			}
			System.out.println();
		}
		for(int i=1;i<n;i++) {
			for(int j=n-1;j>=i;j--) {
				System.out.print(" ");
			}
			for(int k=0;k<=i;k++) {
				if(k==0 || k==i || i==n-1) {
					System.out.print("* ");
				} else {
					System.out.print("  ");
				}
				
			}
			System.out.println();
		}

	}

}

/* 

The output for the above program.

 * * * * 
  *   * 
   * * 
    * 
   * * 
  *   * 
 * * * * 
 
 
*/


