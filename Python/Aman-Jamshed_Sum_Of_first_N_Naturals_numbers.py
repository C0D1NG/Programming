# PYTHON program to find sum of first n natural numbers. 

  
# Returns sum of first n natural  numbers 
def findSum(n) : 
        sum = 0
        x = 1
        while x <=n : 
            sum = sum + x 
            x = x + 1
        return sum
  
  
# Driver code 
  
n = 5
print(findSum(n))
  