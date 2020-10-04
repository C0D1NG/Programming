def factorial(n): 
    if n == 0 or n == 1: 
        return 1
    else: 
        fact = 1
        while(n > 1): 
            fact *= n 
            n -= 1
        return fact 
  
# Driver Code 
num = int(input("Enter a number: "))
if num >= 0:
    print("Factorial of",num,"is", factorial(num)) 
else:
    print("Can not compute factorial of negative number")