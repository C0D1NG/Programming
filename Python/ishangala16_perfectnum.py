
num = int(input("Enter any number to check perfect number: "))
sum1=0
for i in range(1,num):
    if num % i == 0:
        sum1 = sum1 + i
if sum1 == num:
    print(num, "is PERFECT NUMBER")
else:
    print(num, "is NOT PERFECT NUMBER")
