#An Armstrong number is a number whose sum of cube of digits is equal to the same number.
#For example 153 is an armstrong number

num = int(input("Enter a number\n"))
temp = num
sum = 0
while(temp > 0):
    digit = temp % 10
    sum += digit ** 3
    temp = temp // 10
if sum == num:
    print("%d is an Armstrong Number" %(num))
else:
    print("%d is NOT a Armstrong Number" %(num))
