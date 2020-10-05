# A strong number is a number whose sum of factorials of digits is equal to the same number.
import math
number = int(input())
n = number
a = 0
while number>0:
    a+=math.factorial(int(number%10))
    number= int(number/10)
if a==n:
    print(f"Yes, {n} is a Strong Number")
else:
    print(f"No, {n} is not a Strong Number")