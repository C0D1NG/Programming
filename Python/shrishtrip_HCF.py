# Function to calculate the GCD(HCF) of the given 2 nos. using Euclidean Lemma
def findHCF(a,b):
    if b==0:                    # If one of them is 0, the other one is the HCF
        return a                
    return findHCF(b,a%b)       # Else we can make a recursive call by swapping them and MODing 1st with 2nd no

# Driver function
def main():                      
    print("Enter 1st number")    # Prompting user for 1st number
    a = int(input())             # Scaning the 1st number
    print("Enter second number") # Prompting user for 2nd number
    b = int(input())             # Scaning the 1st number
    hcf = findHCF(a,b)           # Calling helper function
    print("HCF is =",hcf)        # Printing the final answer


# Using the special variable  __name__ 
if __name__=="__main__": 
    main() 