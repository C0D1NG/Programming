// Java program to find maximum number of 
// handshakes. 
  
class GFG  
{ 
    // Calculating the maximum number of  
    // handshake using derived formula. 
    static int maxHandshake(int n) 
    { 
        return (n * (n - 1)) / 2; 
    } 
      
      
    // Driver code 
    public static void main (String[] args) 
    { 
        int n = 10; 
        System.out.println( maxHandshake(n)); 
    } 
} 
