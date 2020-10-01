number = int(input("Enter number of elements: "))
elements = []
for i in range(number):
    x = int(input("Enter {} number: ".format(i+1)))
    elements.append(x)
sum=0
for i in elements:
    sum=sum+i
print("Sum of the list elements is: ",sum)