import java.util.*;
import java.io.*; 
  
class mcmonojit_strongNUM
{
    static int f[]=new int[10];
  
    //function to check if the number is a strong number
    static boolean isStrong(int x) 
    { 
        int Sum = 0; 
        int temp = x; 
        while (temp>0) 
        { 
            Sum=Sum+f[temp%10]; 
            temp=temp/10; 
        } 
       
        return (Sum == x); 
    }
    
    
    // Main function
    public static void main (String[] args)throws IOException
    {
        BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the number to be checked : ");
        int n=Integer.parseInt(b.readLine());
        
        f[0] = f[1] = 1; 
        for (int i = 2; i<10; ++i)
        {
            f[i] = f[i-1] * i;
        }
        
        if(isStrong(n)) 
        { 
            System.out.println("Yes, "+n+" is a Strong number."); 
        } 
        else
            System.out.println("No, "+n+" is not a Strong number.");
        System.out.println(">>>>End of program>>>>");
    }
}