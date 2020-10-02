import math

def main():

    decimal = float(input('Enter de decimal number to convert: '))
    print(convertDecimalToBinary(decimal))

    return

def convertDecimalToBinary(decimal):
    decimalPart, integerPart = math.modf(decimal)
    repeat = ''
    count = 0
       
    if (decimalPart == 0):
        binary = ''
    else:
        binary = '.'
        


    while (integerPart != 0):
        if (integerPart == 1):
            binary = '1' + binary
            integerPart -= 1
        elif (integerPart % 2 != 0):
            binary = '1' + binary
            integerPart = (integerPart - 1) / 2
        else:
            binary = '0' + binary
            integerPart /= 2

    while (decimalPart != 0):
        if (decimalPart * 2 >= 1):
            decimalPart = (decimalPart * 2) - 1
            binary += '1'
        else:
            decimalPart *= 2
            binary += '0'
        
        count += 1
        
        if (count > 4 ):
            repeat += binary[-1]
        
        if (len(repeat) == 4):
            if (repeat == binary[-8:-4]):
                binary = binary[:-4]
                break
            else:
                repeat = repeat[1:]
            

    return binary

main()