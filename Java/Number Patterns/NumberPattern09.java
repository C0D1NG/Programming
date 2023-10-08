public class NumberPattern09 {

	public static void main(String[] args) {
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=i;j++)
			{
				System.out.print(j+" ");
			}
			System.out.println();
		}
		
		int count = 1;
		for(int i=1;i<=4;i++)
		{
			for(int j=4;j>=i;j--)
			{
				System.out.print(count+" ");
				count = count + 1;
			
			}
			System.out.println();
			count = 1;
			
		}

	}

}
