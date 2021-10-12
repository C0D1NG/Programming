N = int(input("Please enter positive integer: "))
ints = []
for i in range (N):
    n = int(input("Enter integer {}: ".format(i+1)))
    ints.append(n)
#products
product = 1
for item in ints:
    product = product*item

print("Output is ", product)