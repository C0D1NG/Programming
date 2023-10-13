public class NumberPattern14 {

	public static void main(String[] args) {
		int n = 4;
		int i, j;
		  
        // outer loop to handle number of rows
        for (i = 1; i <= n; i++) {
            // inner loop to print the spaces
            for (j = 1; j <= 2 * (n - i); j++) {
                System.out.print(" ");
            }
  
            // inner loop to print the first part
            for (j = i; j >= 1; j--) {
                System.out.print(j + " ");
            }
  
            // inner loop to print the second part
            for (j = 2; j <= i; j++) {
                System.out.print(j + " ");
            }
  
            // printing new line for each row
            System.out.println();
        }
    }
}

/* 

The output for the above program

      1 
    2 1 2 
  3 2 1 2 3 
4 3 2 1 2 3 4 

*/


