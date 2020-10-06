using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace App_FindingTheLargeElementInArray
{
    class Program
    {



       static int Main()
        {
             

            int sizeArray;

            Console.WriteLine("Please enter the size of array elements");

             

            sizeArray = Convert.ToInt32(Console.ReadLine());


            if (sizeArray <= 0)
                return 0;

             

            int[] arrElements= new int[sizeArray];



            for (int i = 0; i < sizeArray; i++)
            {
                
                Console.Write($"Enter Element ({i + 1}) - ");


                arrElements[i] = Convert.ToInt32(Console.ReadLine());

               
            }

            //Finding the largest element in the array

            for (int j = 0; j < sizeArray; j++)
            {

                if (arrElements[0] < arrElements[j])
                {

                    arrElements[0] = arrElements[j];

                }
                 

            }


            Console.WriteLine($"The largest element in array is: { arrElements[0]}");


            Console.WriteLine($"To exit please enter zero !");



            Console.ReadLine();


            return 0;



        }



       
    }
}
