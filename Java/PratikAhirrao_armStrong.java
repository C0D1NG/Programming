public class PratikAhirrao_armStrong
{ 
    int power(int x, long y) 
    { 
        if( y == 0) 
            return 1; 
        if (y%2 == 0) 
            return power(x, y/2)*power(x, y/2); 
        return x*power(x, y/2)*power(x, y/2); 
    } 
  
   
    int order(int x)  /* Function to calculate order of the number */
    { 
        int n = 0; 
        while (x != 0) 
        { 
            n++; 
            x = x/10; 
        } 
        return n; 
    } 
  
   
    boolean isArmstrong (int x) 
    { 
        
        int n = order(x); 
        int temp=x, sum=0; 
        while (temp!=0) 
        { 
            int r = temp%10; 
            sum = sum + power(r,n); 
            temp = temp/10; 
        } 
  
         
        return (sum == x); 
    } 
  
    public static void main(String[] args) 
    { 
        Armstrong ob = new Armstrong(); 
        int x = 153; 
        System.out.println(ob.isArmstrong(x)); 
        x = 1253; 
        System.out.println(ob.isArmstrong(x)); 
    } 
} 
