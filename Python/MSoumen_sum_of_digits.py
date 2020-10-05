def get_digits(num:int):
    digits=[]
    while(num>0):
        digits.append(num%10)
        num //= 10
    return digits

# Main starts from here
a_number = int(input("Enter Your Number : "))
print("Sum of Digits :",sum(get_digits(a_number)))

print("Happy Programming.")