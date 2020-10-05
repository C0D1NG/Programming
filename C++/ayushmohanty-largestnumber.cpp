import java.util.Scanner;
class large{
    public static void main(String[] args) {
     Scanner sc =new Scanner(System.in);
     System.out.println("Enter the range");
     int n = sc.nextInt();
    
     int[] data = new int[n];
     System.out.println("Enter the array value");
     for(int i=0;i<n;i++)
     {
        data[i]=sc.nextInt();

     }
     
     for(int i=0;i<n;i++)
     {
         if(data[0]<data[i])
         {
            data[0]= data[i];
         }
        

     }
     System.out.println("large one is "+data[0]);

     sc.close();  
    }
}
