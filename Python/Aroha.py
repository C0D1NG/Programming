Test = int(input("Enter Number of Test cases: "))
for i in range(0, Test):

    N= int(input("Number of pets in Aroha's pet day: "))
    for x in range(0, N):
        treat = 0
        size = int(input("Size of pet {} :".format(x+1)))

        if size <= 10:
            treat = treat +1
        if size > 10:
            treat = treat +2
        if  size > 20:
            treat = treat + 3
    print("\n Case ", i+1,':', treat, "treats")


