print("Enter the number to be verified as prime or not ")
x = int(input())
flag = 0
for a in range(x):
    if (x%(a+1) == 0):
        if ((a+1) != x) and ((a+1) != 1):
            flag+=1
if flag == 0:
    print("The Number entered is a Prime number")
else:
    print("The Number entered is not a Prime number")