n=int(input("Please Enter the Number- "))
summ=0
for i in range(1,n):
    if n%i==0:
        summ+=i
if summ==n:
    print(f"Yes {n} is a Perfect Number")
else:
    print(f"No {n} is not a Perfect Number")


