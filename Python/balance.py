#Question 1
balance=0.0
otherBalance=0.0

#Question2
def  getBalance():
    return balance

def getOtherBalance():
    return otherBalance

def printBalance():
    bala=getBalance()
    bal=round(bala,2)
    other=getOtherBalance()
    other=round(other,2)
    print("Balance $",bal, "and otherBalance $", other)
    

def deposit(amount):
    balance=getBalance()
    balance+=amount
    print("Balance after deposit is $",balance)
    return(balance)


getBalance()
getOtherBalance()
printBalance()
deposit(100)