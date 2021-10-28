import java.util.Scanner;
class NonFibonacci{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the max Range:");
		int high=sc.nextInt();
		System.out.println("The fibonacci series upto "+high+" is");fibo(high);
		System.out.println();
		System.out.println("The Non-fibonacci series upto "+high+" is");nonFibo(high);
	}
	private static void fibo(int high){
		int a=0,b=1,c=1;
		while(a<=high){
			System.out.print(a+" ");
			a=b;
			b=c;
			c=a+b;
		}
	}
	private static void nonFibo(int high){
		int a=0,b=1,c=1;
		while(a<=high){
			if(b>high){
				prnt(a,high);
				break;
			}
			prnt(a,b);
			a=b;
			b=c;
			c=a+b;
		}
	}
	private static void prnt(int a,int b){
		for(int i=a+1;i<b;i++)
			System.out.print(i+" ");
	}
}

		
			
			
		