
/**
 * Positive or Negative Number
 * Link: https://github.com/C0D1NG/Programming/issues/3
 * */

using System;

public class Program
{
    static public void Main()
    {
        Console.WriteLine("Enter a Number");
        int input = Console.ReadLine();
        if(input < 0)
        {
            Console.WriteLine("The given number is negative");
        }
        else if(input > 0)
        {
            Console.WriteLine("The given number is positive");
        }
        else
        {
            Console.WriteLine("The given number is Zero(0)");
        }
        Console.ReadLine();
    }
}