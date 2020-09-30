import java.io.*;

class Program {
	public static void main (String[] args) throws IOException {
		//taking BufferReader class to take efficiant input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] input = br.readLine().split(" ");
		//input number
		int number = Integer.parseInt(input[0]);

		//making a flag
		boolean flag = false;
		for(int i = 2; i <= number/2; ++i)
		{
			// if is a prime number
			if(number % i == 0)
			{
				flag = true;
				break;
			}
		}

		//if flag is true then it is a prime number
		if (!flag)
			System.out.println(number + " is a prime number.");
		else
			System.out.println(number + " is not a prime number.");

	}
}
