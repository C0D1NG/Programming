# This program tests for prime numbers.

def prime(no):
    
    answer = 1
    i = 2

    while i < no:

        testing = no/i

        if testing.is_integer():
            i = no
            answer = 0
        else:
            i = i + 1

    return answer

number = int(input("Enter a number: "))

test = prime(number)

if test == 1 or no == 2:
    print("The number is a prime.")
else:
    print("The number is not a prime.")
