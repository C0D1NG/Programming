def reverse_num(number):
    number = str(number)
    num = "".join(reversed(number))
    return num

repeat = True

print('Program To Reverse a Number\n')

while repeat :
    number = input('Enter a Number ')
    ans = reverse_num(number)
    print(ans)
    rep = input('Do you want to Continue (y/n) ? ')
    if rep == 'n' or rep == 'N':
        repeat = False

