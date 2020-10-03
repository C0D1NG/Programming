# Python Program to find the factors of a given number.

def find_factors(n):
    print("The factors of", n, " are:")
    for i in range (1, n+1):
        if n % i == 0:
            print(i)
num = int(input("Enter a number: "))
find_factors(num)
