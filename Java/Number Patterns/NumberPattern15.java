public class NumberPattern15 {

	public static void main(String[] args) {
		int n=4;
		for(int i=0;i<n;i++) {
			int count = i+1;
			for(int j=0;j<=i;j++) {
				System.out.print(" ");
			}
			for(int k=n-1;k>=i;k--) {
				System.out.print(count+" ");
				count++;
			}
			System.out.println();
		}
	}

}

/* 

The output for the above program

 1 2 3 4 
  2 3 4 
   3 4 
    4 

*/

