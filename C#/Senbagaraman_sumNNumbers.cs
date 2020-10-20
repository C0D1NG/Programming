/**
 * Sum of First N Natural Numbers
 * Link: https://github.com/C0D1NG/Programming/issues/5
 * */

using System;

public class Program
{
    static public void Main()
    {
        Console.WriteLine("Sum of First N Natural Numbers");
        Console.WriteLine("Enter a number");
        int a = Console.ReadLine();
        int sum = 0;
        for(int i = 0; i < a; i++)
        {
            sum = sum + i;
        }
        Console.WriteLine("The sum of N {0} numbers is ", a, sum);
        Console.ReadLine();
    }
}