public class Nishiki97_decimalToBinary  
   {  
     public static void Main(string[] args)  
      { 

       int  number, i;       
       
       int[] array = new int[10];     
       
       Console.Write("Enter decimal number here -> ");    
       
       number= int.Parse(Console.ReadLine());     
       
       for(i=0; number>0; i++)      
        {      
         array[i]=number%2;      
         number= number/2;    
        }      
       
       Console.Write("answer is ->");      
       
       for(i=i-1 ;i>=0 ;i--)      
       {      
        Console.Write(array[i]);      
       }                 
      
      }  
  }  