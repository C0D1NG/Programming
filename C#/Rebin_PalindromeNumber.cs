using System;

namespace PalindromeNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            FindPalindromNumber();

            Console.ReadKey();

        }

        private static void FindPalindromNumber()
        {
            Console.WriteLine("Enter a number to check :");
            int inputeNumber = int.Parse(Console.ReadLine());
            int tempNumber = inputeNumber;
            int reverseNumber = 0;
            while (tempNumber > 0)
            {
                reverseNumber = reverseNumber * 10 + tempNumber % 10;
                tempNumber = tempNumber / 10;
            }
            if (reverseNumber == inputeNumber)
            {
                Console.WriteLine($"Inputed number {inputeNumber} is a palindrome number");
            }
            else
            {
                Console.WriteLine($"Inputed number {inputeNumber} is not a palindrome number");
            }
        }

    }
}
