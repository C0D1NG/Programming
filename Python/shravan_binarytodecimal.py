b = list(input("enter any binary number : "))

value = 0


for i in range(len(b)):
    d = b.pop()
    if d == '1':
        value = value + pow(2, i)

print("The decimal value of the number is", value)