import math

def calhandshakes():

    total_num = input('Enter the number of people for whom the maximum handshakes is to be calculated ? ---> ')
    try:
        tn = int(total_num)
        handshakes = ((tn-1)*tn)/2
        return 'Maximum no of handshakes between '+ total_num + ' people '+ '----> '+str(math.floor(handshakes))
    except:
        return 'Please enter an Integer value for the total number of people in the list'

print(calhandshakes())





