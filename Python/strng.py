x=int(input("Enter value of X: "))
num=[]
for n in range(x):
    N=input("Enter strng value: ")
    num.append(N)


r=len(num[0])
y=len(num[1])
z=len(num[2])
print("Length of ",num[0],"is",r)
print("Length of ",num[1],"is",y)
print("Length of ",num[2],"is",z)

def min(x,y,z):
    if (x < y) and (x < z):
       min = x
    elif (y < x) and (y < z):
        min = y
    elif (z < y) and (z < x):
        min = z
    return(min)

def max(x,y,z):
    if (x > y) and (x > z):
       max = x
    elif (y > x) and (y > z):
        max = y
    elif (z > y) and (z > x):
        max = z
    return(max)

#shortest strng
print("Shortest strng is", min(r,y,z))

#longest
print("Shortest strng is", max(r,y,z))