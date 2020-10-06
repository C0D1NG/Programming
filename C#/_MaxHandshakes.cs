using System;

namespace MaxHandshakes
{
    class _MaxHandshakes
    {
        static int mHandshakeWGreeting, mHandshakes = 0;

        static void Main(string[] args)
        {
            Console.WriteLine("Welcome. Please enter the number of people present: \n");
            int input = int.Parse(Console.ReadLine());

            if(!(input <= 1))
            {
                mHandshakeWGreeting = input * input;
                mHandshakes = input * input * 2;
            }

            Console.WriteLine("The results:" +
                "\nPeople present: {0} \nIntroductory handshake(s): {1} \nExiting handshake(s): {2} \nTotal handshake(s): {3}",
                input, mHandshakeWGreeting, mHandshakeWGreeting, mHandshakes);

        }
    }
}
