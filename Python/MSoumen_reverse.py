from func import get_digits

def reverse(num:int):
    s=""
    for i in map(str, get_digits(num)):
        s += i
    return int(s)

# Main Starts from here
a_number = int(input("Enter Your Number : "))
print("Reversed :", reverse(a_number))

print("Happy Programming.")