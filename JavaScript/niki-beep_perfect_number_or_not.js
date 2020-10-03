// Here, we are going to write a program for finding out perfect number

// Perfect Number - A number is said to be perfect when its value is equal to its sum of complete divisors.

function perfectNumber(number)
	{
		var flag,remainder,addition = 0,i;
		flag = number;
		for(i = 0; i < number; i++)
		{
			remainder = number%i;
			if(remainder==0)
			{
				addition += i;
			}
		}
		if(addition == flag)
		{
			console.log("The inputed number is Perfect");
		}
		else
		{
			console.log("The inputed number is not Perfect");
		}
    }


// The inputed number is Perfect   
perfectNumber(6);
// The inputed number is Perfect
perfectNumber(28);
    
