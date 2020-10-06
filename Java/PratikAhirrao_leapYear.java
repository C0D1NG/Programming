class PratikAhirrao_leapYear 
{ 
    static boolean checkYear(int year) 
    { 
        // If a year is multiple of 400,  
        // then it is a leap year 
        if (year % 400 == 0) 
            return true; 
      
        // Else If a year is multiple of 100, 
        // then it is not a leap year 
        if (year % 100 == 0) 
            return false; 
      
        // Else If a year is multiple of 4, 
        // then it is a leap year 
        if (year % 4 == 0) 
            return true; 
        return false; 
    } 
          
    // Driver method 
    public static void main(String[] args)  
    { 
        int year = 2000; 
        System.out.println( checkYear(2000)? "Leap Year" : 
                           "Not a Leap Year" ); 
    } 
} 
