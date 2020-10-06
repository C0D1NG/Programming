def power(base,exp):
    if(exp==1):
        return(base)
    if(exp!=1):
        return(base*power(base,exp-1))
base=int(input("base: "))
exp=int(input("exponential value: "))
print("Result:",power(base,exp))
