class PratikAhirrao_revOfNum 
{ 
    
    static int reversDigits(int num) 
    { 
        int rev_num = 0; 
        while(num > 0) 
        { 
            rev_num = rev_num * 10 + num % 10; 
            num = num / 10; 
        } 
        return rev_num; 
    } 
      
    
    public static void main (String[] args)  
    { 
        int num = 1114562; 
        System.out.println("Reverse of no. is " 
                           + reversDigits(num)); 
    } 
