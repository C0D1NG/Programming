
/**
 * Odd and Even number 
 * Issue: https://github.com/C0D1NG/Programming/issues/4
 * 
 * **/

using System;

public class Program
{
    static public void Main()
    {
        Console.WriteLine("ODD EVEN NUMBER");

        Console.WriteLine("Enter a number");

        int input = Console.ReadLine();

        if(input%2 == 0)
        {
            Console.WriteLine("The given number is even");
        }
        else
        {
            Console.WriteLine("The given number is odd");
        }

        Console.ReadLine();
    }
}