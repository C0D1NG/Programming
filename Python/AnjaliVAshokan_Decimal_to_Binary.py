# Write a program to convert decimal number into binary number
# Algorithm: Recursion

# Function to convert decimal to binary
# Time complexity: O(1)
def binary(n):
    if n > 1:
        binary(n // 2)

    print(n % 2, end = "")

# Accept the user input as an integer
n = int(input("Enter the number: "))

print("Binary: ", end = "")
binary(n)
print()
