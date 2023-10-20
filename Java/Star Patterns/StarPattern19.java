public class StarPattern19 {

	public static void main(String[] args) {
		int n = 4;
		for(int i=0;i<n;i++) {
			for(int j=n;j>i;j--) {
				System.out.print("* ");
			}
			System.out.println();
		}
		for(int i=1;i<n;i++) {
			for(int k=0;k<=i;k++) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}

}

/* 

The output for the above program.

* * * * 
* * * 
* * 
* 
* * 
* * * 
* * * * 


*/

