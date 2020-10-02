using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace App_PrimeNumber
{
    class Program
    {


        static bool checkPrimeNumber(Int64 numValue)
        {

            if (numValue < 2)
                return false;


            if (numValue > 2 && (numValue % 2) == 0)
                return false;


            for (int i = 2; i < numValue; i++)
            {

                Console.WriteLine($"divisor:  {i} \n");

                if ((numValue % i) == 0)
                {

                    return false;

                }

            }


            return true;

        }



       static int Main()
        {
            Int64 inputValue;

            do
            {

                Console.WriteLine(" Please enter a number to check is prime number or not \n Enter zero to exit");

                inputValue = Convert.ToInt64(Console.ReadLine());


                if (checkPrimeNumber(inputValue))

                    Console.WriteLine($" {inputValue} : is a prime number \n");

                else

                    Console.WriteLine($" {inputValue} : is not a prime number \n");


            } while (inputValue > 0);



            return 0;



        }



       
    }
}
