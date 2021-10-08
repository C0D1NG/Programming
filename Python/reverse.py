 
num = int(input('Enter  number to be reversed: '))

#initiate reverse to 0
reverse = 0
 
while(num > 0):
    #logic
    mod = num % 10
    reverse = reverse * 10 + mod
    num = num // 10
 
print('Number after reversed is ', reverse)