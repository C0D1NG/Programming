output = ['It is hot', 'It is cold', 'It is just right', 'Good bye']
def temp():
    t= int(input('Please Enter temperature:'))
    if t >100:
        result = output[0]

    elif t == 0:
        print(output[3])
        exit()
    elif t < 60:
        result= output[1]
    
    else:
        result = output[2]
    print (result)
while True:
    temp()
    
