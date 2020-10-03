n=int(input("Enter N"))
summ=0
for i in range(1,n):
    if n%i==0:
        summ+=i
if summ==n:
    print("It is a Perfect Number")
else:
    print("It is not a Perfect Number")
