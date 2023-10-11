public class NumberPattern11 {

	public static void main(String[] args) {
		
		int count =0;
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=i;j++)
			{
				System.out.print(" ");
			}
			for(int k=9;k>=(i*2);k--)
			{
				if(k<9 && k>1)
				{
					System.out.print(" ");	
				}
				else
				{
					count = count + 1;
					System.out.print(count);	
				}
			}
			
			for(int l=1;l<=i;l++)
			{
				if(i==5 && l==1)
				{
					System.out.print("*");
				}
				if(l>1 || i==5)
				{
					System.out.print(" ");
				}
				else
				{
					System.out.print(count);
				}
			}
				
		
			System.out.println();
			}
		}
}