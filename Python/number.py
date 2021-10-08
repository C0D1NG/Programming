N=int(input("How many numbers should be entered: "))
numbers=[]
for i in range(N):
    n=int(input())
    numbers.append(n)
count=0
for x in numbers:
    if x%5==0 or x%7==0:
        count=count+1

print("No. of inputs: ", count)