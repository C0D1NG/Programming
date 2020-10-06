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
		
		StringBuilder sb=new StringBuilder();
		//sb is used to store the reverse no
		int no=n;
		while(n>0)
		{
		    //Extract digits from last
		    int d=n%10;
		    n=n/10;
		    //append in reverse order
		    sb.append(d);
		}
		//print it
	   System.out.println("Reverse of "+no+" = "+sb);
	}
}
