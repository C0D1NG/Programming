/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
		//Input a No
		int n=Integer.parseInt(buf.readLine());
		//f will store the factorial
		long f=1;
		for(int i=1;i<=n;i++)
		f=f*i;
		//print It
		System.out.println("factorial is = "+f);
	}
}
