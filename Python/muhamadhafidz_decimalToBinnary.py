a = int(input("input your decimal number : "))
binary = ""
xBinary = 0
while ( a != 1 ) :
    xBinary = a % 2
    binary = binary + str(xBinary)
    a = int(a / 2)
binary = binary + "1"
print("Your binary number is " + binary[::-1])
