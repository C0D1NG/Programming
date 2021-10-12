def add(A, B, m, n): 
  
    size = max(m, n); 
    # Initialize the sum polynomial
    sum = [0 for i in range(size)]  

    # Take every term of first polynomial
    for i in range(0, m, 1): 
        sum[i] = A[i] 
  
    #Add every term of second polynomial
    for i in range(n): 
        sum[i] += B[i] 
  
    return sum
  
# A utility function to print a polynomial 
def printPoly(poly, n): 
    for i in range(n):
        print(poly[i], end = "") 
        if i == 1:
            print('x',end="")
        elif (i != 0): 
            print("x^", i, end = "") 
        
        if (i != n - 1): 
            print(" + ", end = "") 

#Polynomial 5 + 7x + 10x^2 + 6x^3 
A = [5, 7, 10, 6] 
  

# polynomial 1 + 2x + 4x^2 
B = [1, 2, 4] 
m = len(A) 
n = len(B) 

 #First polynomial 
print("First polynomial is") 
printPoly(A, m) 

#print second polynomial
print("\n\nSecond polynomial is") 
printPoly(B, n) 

sum = add(A, B, m, n) 
size = max(m, n) 

#Print sum of polynomial 
print("\n\nsum polynomial is") 
printPoly(sum, size) 
print()