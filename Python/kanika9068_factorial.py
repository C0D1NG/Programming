def factorial(num):
    if num == 1:
        return num
    else:
        return num * factorial(num - 1)  #recursive call

# Enter number
num = int(input("Enter a Number: "))

# if input number is negative, return
if num < 0:
    print("Factorial cannot be calculated")
# elif the input number is 0 then display 1 as output
elif num == 0:
    print("Factorial of 0 is 1")
# else call factorial function
else:
    print("Factorial of", num, "is: ", factorial(num))
