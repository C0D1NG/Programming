using System;
class Prime_Or_Not
{
    static void Main(string[] args)
    {
        var numbers = new[]{3,821,2,148,1,7,8,4,10,23,7716,12,99,45};
        foreach(var n in numbers)
            Console.WriteLine($"The number {n} is {PrimeOrNot(n)}a prime number");
    }

    static string PrimeOrNot(int n)
    {
        if(n < 1) return "not ";
        for(var i = 2; i <= n/2; i++)
            if(n % i == 0) return "not ";
        
        return "";
    }
}