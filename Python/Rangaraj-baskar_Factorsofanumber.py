print("Enter the number whose Factors are to be found: ")
x = int(input())
for a in range(x):
    if x%(a+1) == 0:
        print(a+1)