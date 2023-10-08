public class NumberPattern12 {

	public static void main(String[] args) {
		for(int i=1;i<=5;i++)
		{
			int num = i;
			
			for(int k=5;k>=i;k--)
			{
				System.out.print(num+" ");
				num = num + k  ;
			}
			System.out.println();
		}

	}

}
