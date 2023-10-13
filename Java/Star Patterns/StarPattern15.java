public class StarPattern15 {
	
	public static void main(String[] args) {
         for(int a=1;a<=9;a++)
         {
        	 System.out.print("* ");
         }
         System.out.println();
         
         for(int i=2;i<=5;i++)
         {
        	 for(int j=5;j>=i;j--)
        	 {
        		 System.out.print("* ");
        	 }
        	 for(int k=4;k<=i*2;k++)
        	 {
        		 System.out.print("  ");
        	 }
        	 for(int l=5;l>=i;l--)
        	 {
        		 System.out.print("* ");
        	 }
        	 System.out.println();
         }
         
         for(int i=1;i<=4;i++)
         {
        	for(int j=1;j<=i;j++)
        	{
        		System.out.print("* ");
        	}
        	for(int k=8;k>=i*2;k--)
        	{
        		System.out.print("  ");
        	}
        	for(int l=1;l<=i;l++)
        	{
        		System.out.print("* ");
        	}
        	System.out.println();
         }
         
         for(int a=1;a<=9;a++)
         {
        	 System.out.print("* ");
         }
         System.out.println();
         

	  
	}
}

/* 

The output for the above program.

*               * 
* *           * *
* * *       * * * 
* * * *   * * * * 
* * * * * * * * * 

*/