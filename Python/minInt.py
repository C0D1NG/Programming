def min(x,y,z):
    if (x < y) and (x < z):
       min = x
    elif (y < x) and (y < z):
        min = y
    elif (z < y) and (z < x):
        min = z
    print(min)

min(1,2,3)
min(2,1,3)
min(3,2,1)