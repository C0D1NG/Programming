from random import randint
def cred(credit):
    
    n = int(input("Enter credit under 100: "))
    credit = credit-n
    rand1 = randint(0,10)
    rand2 = randint(0,10)
    rand3 = randint(0,10)
    print("Random numbers are:", rand1,rand2,rand3)
    if rand1 == rand2 == rand3:
        bala=credit*2
        credit =credit+bala
        print("New credit is ", credit)
        cred(credit)
    else:
        credit=0
        print("You lost and New credit is ", credit)
        exit()


#main
credit = 100
cred(credit)