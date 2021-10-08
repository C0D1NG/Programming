import random


def sumList(integers):
    Result=0
    for n in integers:
        print(f"{n}")
        Result+=n
    print(f"The total is: {Result}")


#main section
n=int(input("How many numbers the list should contain? "))
if(n>0):
    integers=[]
    for i in range(0,n):
        integers.append(random.randint(0,10))
sumList(integers)
