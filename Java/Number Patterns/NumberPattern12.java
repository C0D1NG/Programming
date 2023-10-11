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

/*

The output of the above program

1 6 10 13 15 
2 7 11 14 
3 8 12 
4 9 
5

 */
