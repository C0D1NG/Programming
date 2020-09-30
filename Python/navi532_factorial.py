
def factorial_recursive(n): 
    # single line to find factorial 
    return 1 if (n==1 or n==0) else n * factorial(n - 1);  
    
def factorial(n): 
    if n < 0: 
        return 0
    elif n == 0 or n == 1: 
        return 1
    else: 
        fact = 1
        while(n > 1): 
            fact *= n 
            n -= 1
        return fact 
def factorial_single(n): 
  
    # single line to find factorial 
    return 1 if (n==1 or n==0) else n * factorial(n - 1) 

num = 5; 
print("Recursive: Factorial of",num,"is", 
factorial_recursive(num)) 
print("Single Line: Factorial of",num,"is", 
factorial_single(num)) 
print("Factorial of",num,"is", 
factorial(num)) 
