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
		//Check for even or odd
		if(n%2==0)
		System.out.print(n+" is Even");
		else
		System.out.print(n+ " is Odd");
	}
}
