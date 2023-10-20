public class NumberPattern13 {

	public static void main(String[] args) {
		int n=6,sum=0;
		for(int i=0;i<n;i++) {
			if(i%2==0) sum = 0;
			for(int j=0;j<=i;j++) {
				sum = Math.abs(sum - 1);
				System.out.print(sum+" ");
			}
			System.out.println();
		}
	}
}

// Another method to solve this

/* 

public class NumberPattern13 {

	public static void main(String[] args) {
		int n=6;
		for(int i=0;i<n;i++) {
			for(int j=0;j<=i;j++) {
				if((i+j) % 2 == 0) {
					System.out.print(1+" ");
				}
				else {
					System.out.print(0+" ");
				}
			}
			System.out.println();
		}
	}
} 

*/

/* 

The output for the above program

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 


*/


