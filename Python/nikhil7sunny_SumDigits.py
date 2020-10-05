def sum_digits(number):
    digit_sum = 0
    for i in number:
        digit_sum += int(i)
    return digit_sum    

repeat = True

print('Program to Find the Sum of Digits')

while repeat :
    number = input('Enter a Number')
    ans = sum_digits(number)
    print('Sum of Digits : ',ans)
    rep = input('Do you want to Continue (y/n) ?')
    if rep == 'N' or rep == 'n':
        repeat = False