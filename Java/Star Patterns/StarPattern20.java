public class StarPattern20 {

	public static void main(String[] args) {
		int n=5;
		for(int i=0;i<5;i++) {
			for(int j=n-1;j>=i;j--) {
				System.out.print(" ");
			}
			for(int k=0;k<=i;k++) {
				if(i==0 || i==n-1 || k==0 || k==i) {
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

     * 
    * * 
   *   * 
  *     * 
 * * * * * 

*/
