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
		int flag=0;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			System.out.println(n+" is a Prime Number");
		else
			System.out.println(n+" is not a Prime Number");
	}
}
