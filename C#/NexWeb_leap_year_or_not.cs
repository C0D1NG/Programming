using System;

public class IsLeapYear {
  public static void Main() {
    int year;
    Console.WriteLine("Enter a year:");
    year = Convert.ToInt32(Console.ReadLine());

    if (DateTime.IsLeapYear(year)) {
      Console.WriteLine("{0} is a leap year.", year);

    } else {
      Console.WriteLine("{0} is not a leap year.", year);
    }
  }
}
