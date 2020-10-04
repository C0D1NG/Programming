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
		int sum=0,no=n;
		while(n>0)
		{
		    //Extract digits
		    int d=n%10;
		    n=n/10;
		    //Calculate sum
		    sum=sum+d;
		}
		System.out.println("Sum of digits of "+no+" = "+sum);
	}
}
