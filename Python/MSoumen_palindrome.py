from func import reverse

def palindrome_or_not(num:int):
    if(num==reverse(num)):
        return True
    else:
        return False

# Main Starts from here
a_number = int(input("Enter Your Number : "))
if(palindrome_or_not(a_number)):
    print("|    Palindrome   |")
else:
    print("|    Not a Palindrome    |")

print("Happy Programming.")