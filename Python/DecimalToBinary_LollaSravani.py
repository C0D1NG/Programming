def ConvertToBinary(decimal):
    if decimal > 1: 
        ConvertToBinary(decimal // 2)
    print(decimal % 2, end = '') 

decimalValue = int(input("Enter a decimal number: "))
ConvertToBinary(decimalValue)