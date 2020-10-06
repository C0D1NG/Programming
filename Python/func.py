def get_digits(num:int):
    digits=[]
    while(num>0):
        digits.append(num%10)
        num //= 10
    return digits

def reverse(num:int):
    s=""
    for i in map(str, get_digits(num)):
        s += i
    return int(s)

def palindrome_or_not(num:int):
    if(num==reverse(num)):
        return True
    else:
        return False