/* In case of number of order 10^9 or more, using Scanner Function will make 
 * execution time for I/O increase. So next option is to use BufferReader Function
 * but it require more line of coding. Thus I have created a user defined I/O function
 * using Scanner() and Buffer() Methods
 */

//Imported the required libraries
import java.io.*;
import java.util.*; 

public class sumOfDigits_SangeethRaajA{ 
	static class FastReader 
	{ 
		BufferedReader br; 
		StringTokenizer st;    // StringTokenizer() is used to read long strings

		public FastReader() 
		{ 
			br = new BufferedReader(new
					InputStreamReader(System.in)); 
		} 

		String next() 
		{ 
			while (st == null || !st.hasMoreElements()) 
			{ 
				try
				{ 
					st = new StringTokenizer(br.readLine()); 
				} 
				catch (IOException e) 
				{ 
					e.printStackTrace(); 
				} 
			} 
			return st.nextToken(); 
		} 

		int nextInt() 
		{ 
			return Integer.parseInt(next()); 
		} 

		long nextLong() 
		{ 
			return Long.parseLong(next()); 
		} 

		double nextDouble() 
		{ 
			return Double.parseDouble(next()); 
		} 

		String nextLine() 
		{ 
			String str = ""; 
			try
			{ 
				str = br.readLine(); 
			} 
			catch (IOException e) 
			{ 
				e.printStackTrace(); 
			} 
			return str; 
		} 
	} 

	
//	Our main function starts here
	
	public static void main(String[] args) 
	{ 
		//Declared an object of class FastReader for I/O purpose. 
		FastReader s=new FastReader(); 
		int num=s.nextInt();
		
		int n=num;
		int digits= numDigits(n);
		System.out.println("The number "+num+" has "+digits+" digits");
		
		int sum=0;
		
		for(int i=0;i<digits;i++) {
			
			sum+=n%10;   //By n%10 we get the last digit of number, i.e., the unit digit of a number
			
			n/=10;       //By n/=10, we mean n=(n/10) which removes the unit digit of a number but keeps the rest
			             //like if n=100, then n/=10 makes n=10,i.e., remove the unit digit and keeps the the rest of number
		}
		
		System.out.println("The sum of digits in the number "+num+" are "+sum);
		
	} 
	

//	Function to calculate the number of digits in a number
	static int numDigits(int a) {
		int digits=1;
		
		while(a/10>0)
		{
			digits++;
			a/=10;
		}
		
		return digits;
	}
} 





