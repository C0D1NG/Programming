public class StarPattern21 {

	public static void main(String[] args) {
		int n=5;
		for(int i=0;i<n;i++) {
			for(int j=0;j<=i;j++) {
				System.out.print(" ");
			}
			for(int k=n-1;k>=i;k--) {
				if(i==0 || i==n-1 || k==n-1 || k==i) {
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

 * * * * * 
  *     * 
   *   * 
    * * 
     * 
 

*/