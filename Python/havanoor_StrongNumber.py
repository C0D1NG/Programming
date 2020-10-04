from math import factorial




val=(input("Enter the number"))

temp=(val)
check=0

for i in val:
    check+=factorial(int(i))


if check==int(val):
    
    print("The number is a strong number")
else:
    print("No the number is not a strong number")
    










