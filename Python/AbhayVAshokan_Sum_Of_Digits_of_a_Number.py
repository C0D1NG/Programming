# Program to find the sum of digits of a number
# Time complexity: O(n) where n is the number of digits in the number

# Accept the nubmer as a string
n = input()

# Iterate through all the digits of the number and add it to sum
sum = 0
for digit in n:
    sum += int(digit)

print("Sum of digits of", n, "is", sum)
