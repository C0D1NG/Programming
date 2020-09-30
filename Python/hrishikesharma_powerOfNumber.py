num = int(input("PLease enter a integer: "))
exp = int(input("Please enter value of exponent: "))
powr = 1

for i in range(1, exp + 1):
    powr = powr * num

print("The value of ", num, " to the power ", exp, " is ", powr)
