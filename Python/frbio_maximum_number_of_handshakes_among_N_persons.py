# Python3 program to find maximum  
# number of handshakes. 
  
# Calculating the maximum number  
# of handshake using derived formula. 
def maxHandshake(n): 
  
    return int((n * (n - 1)) / 2) 
  
# Driver Code 
n = 10
print(maxHandshake(n)) 