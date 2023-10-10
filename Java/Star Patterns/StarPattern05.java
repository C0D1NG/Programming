public class StarPattern05 {

	public static void main(String[] args) {
		
	for(int i=1;i<=5;i++) {
		for(int j=4;j>=i;j--) {
			System.out.print(" ");
		}
		for(int k=1;k<=i;k++) {
			System.out.print("*");
		}
		System.out.println();
	}
	
	for(int i=1;i<=4;i++) {
		for(int j=1;j<=i;j++) {
			System.out.print(" ");
		}
		for(int k=4;k>=i;k--) {
			System.out.print("*");
		}
		System.out.println();
	}
	
	}
}

/* 

The output for the above program.

*****
 ****
  ***
   **
    *

The difference between StarPattern4 and StarPattern5 is the beginning white
space in the first line that StarPattern4 holds which StarPattern5 avoids.

*/
