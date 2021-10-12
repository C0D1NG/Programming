num1, num2 = input().split(' ')
x = int(num1)
y = int(num2)

def gcd(num1, num2):
    
    i = 1
    while(i <= num1 and i <= num2):
        if(num1 % i == 0 and num2 % i == 0):
            gcd = i
        i = i + 1
    return gcd


lcm = (x*y)//gcd(x,y)
print("The GCD of the numbers is", gcd(x,y))
print("The L.C.M. is",lcm)