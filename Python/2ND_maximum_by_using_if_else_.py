# find the 2nd maximum number in a list using if-else statements

list1 = [10, 20, 4, 45, 99, 99, 100, 100, 101]

# Initialize the maximum and second maximum values with the first two elements of the list
mx = max(list1[0], list1[1])
secondmax = min(list1[0], list1[1])

# Get the length of the list
n = len(list1)

# Iterate through the list starting from the third element
for i in range(2, n):  # Start from the third element (index 2)

    # Check if the current element is greater than the maximum
    if list1[i] > mx:
        secondmax = mx  # Update the second maximum
        mx = list1[i]   # Update the maximum

    # Check if the current element is greater than the second maximum
    elif list1[i] > secondmax:
        secondmax = list1[i]  # Update the second maximum

# Print the result
print("Second highest number is:", str(secondmax))
