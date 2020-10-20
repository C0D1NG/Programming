/**
 * Leap Year
 * Link: https://github.com/C0D1NG/Programming/issues/6
 * */

using System;

public class Program
{
    static public void Main()
    {
        Console.WriteLine("Leap year");
        Console.WriteLine("Enter a year");
        int a = Console.ReadLine();
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    Console.WriteLine("It is a Leap year");
                }
                else
                {
                    Console.WriteLine("It is not a Leap year");
                }
            }
            else
            {
                Console.WriteLine("It is a Leap year");
            }
        }
        else
        {
            Console.WriteLine("It is not a Leap year");
        }

                    Console.WriteLine("Entered Year: {0} ", a);
        Console.ReadLine();
    }
}