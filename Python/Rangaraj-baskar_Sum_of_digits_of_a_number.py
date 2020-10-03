print("Enter the number whose sum of digits are to be found")
x = input()
sum = 0
for a in str(x):
    sum = sum + int(a)
print(sum)