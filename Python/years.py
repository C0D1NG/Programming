N = int(input("Enter number of days: "))
Y = N // 365
if Y > 0:
    print(Y, "Years", end = " ")
W = (N - Y * 365) // 7
if W > 0:
    print(W, "Weeks", end = " ")
D = N - Y * 365 - W * 7
if D > 0:
    print(D, "days")
else:
    print("")