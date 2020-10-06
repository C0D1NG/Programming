using System;
using System.Collections.Generic;

namespace ConsoleApp1
{
    class Bhubhanshu_factors_of_a_number
    {
        static void Main(string[] args)
        {
            Console.Write("Enter a number: ");
            long n = long.Parse(Console.ReadLine());
            SortedSet<long> factors = new SortedSet<long>();
            for(long i = 1; i*i <= n; i++)
            {
                if (i * i == n)
                {
                    factors.Add(i);
                }
                else if (n % i == 0)
                {
                    factors.Add(i);
                    factors.Add(n / i);
                }
            }
            Console.Write("Factors of " + n + " are ");
            Console.WriteLine(string.Join(", ", factors));
        }
    }
}
