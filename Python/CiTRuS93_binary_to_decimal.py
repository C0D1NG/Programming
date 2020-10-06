def binaryToDecimal(binary): 
    
    
    decimal= 0
    counter = 0
    while(binary != 0): 
        dec = binary % 10
        decimal = decimal + dec * pow(2, counter) 
        binary = binary//10
        counter += 1
    return decimal 