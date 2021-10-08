w= int(input("Enter weight of luggage: "))
a = 0
if w<=10:
    a=200
    service = (5/100)*w
    amount = a+service
    print("The total amount to be paid is ", amount)

elif w<=30:
    wt= 30-10
    a= 200 + (wt*50)
    service = (5/100)*w
    amount = a+service
    print("The total amount to be paid is ", amount)
else:
    print("Overweight")
