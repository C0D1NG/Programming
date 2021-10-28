using System;

namespace FibonacciSeries
{
    class Program
    {
        static void Main(string[] args)
        {
            FibonacciSeries();
            Console.ReadKey();
        }

        private static void FibonacciSeries()
        {
            Console.Write("Please enter the number of elments : ");

            int Totalelement, PreviousNum = 0, NextNum = 1, Temp, Iterate;

            Totalelement = Convert.ToInt32(Console.ReadLine());

            for (Iterate = 0; Iterate < Totalelement; Iterate++)
            {
                if (Iterate <= 1)
                    Temp = Iterate;
                else
                {
                    Temp = PreviousNum + NextNum;
                    PreviousNum = NextNum;
                    NextNum = Temp;
                }
                Console.Write(Temp + "  ");
            }
        }
    }
}
