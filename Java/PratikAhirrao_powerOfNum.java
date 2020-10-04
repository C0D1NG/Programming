class PratikAhirrao_powerOfNum { 
  
    
    static int power(int N, int P) 
    { 
        if (P == 0) 
            return 1; 
        else
            return N * power(N, P - 1); 
    } 
  
   
    public static void main(String[] args) 
    { 
        int N = 2; 
        int P = 2; 
  
        System.out.println(power(N, P)); 
    } 
} 
