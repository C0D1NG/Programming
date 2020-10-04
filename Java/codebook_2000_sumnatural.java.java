import java.util.*;
import java.lang.*;
import java.io.*;


class Student
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
		//Input a number
		int n=Integer.parseInt(buf.readLine());
		//Extract the digits
		int sum;
		//Applying the formula for first n natural nos sum
		sum=(n*(n+1))/2;
		System.out.println("Sum of First "+n+" Natural Numbers = "+sum);
	}
}
