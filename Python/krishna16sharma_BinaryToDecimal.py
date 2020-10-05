"""It's quite simple.
Just start from the right and multiply by base and add it to a variable.
In our case, base is 2. Increment the power of the base at the end of
each iteration.
"""
def binaryToDecimal(n):
    num = n
    dec = 0
    base = 1 #Initialize to 2^0
     
    length = len(num);
    for i in range(length- 1, -1, -1):
        if (num[i] == '1'):     
            dec += base
        base = base * 2 #Increment power of 2
     
    return dec;
 
# Driver Code
if __name__=="__main__":
    print("Enter Binary Number")
    num = (input()) 
    print("Dec: {}".format(binaryToDecimal(num)))
