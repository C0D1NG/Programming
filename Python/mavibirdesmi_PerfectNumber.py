import math

num = int(input("Please enter a positive number to check whether if it's a perfect number or not\nNumber: "))

sum_divisors = 1 # The first divisor is 1 but we need to exclude the input number, so we start from 2
i = 2

while i <= math.sqrt(num):
    if num % i == 0:
        if num / i == i:
            sum_divisors += i
        else:
            sum_divisors += i + num // i
    i += 1

answer = "perfect" if sum_divisors == num else "not perfect"

print("Sum of divisors are: ", sum_divisors, "\nYour number is", answer)