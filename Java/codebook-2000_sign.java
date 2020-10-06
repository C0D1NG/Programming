import java.util.*;
import java.lang.*;
import java.io.*;

class Student
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(buf.readLine());
		if(n>0)
		System.out.println(n+" is positive");
		else if(n<0)
		System.out.println(n+" is negative");
		else
		System.out.println(n+" is equal to zero");
	}
}
