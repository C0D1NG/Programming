def binaryToDecimalconv(i):
    number = i;
    decimal_value = 0;
     
    base = 1;
     
    temp = number;
    while(temp):
        last_digit = temp % 10;
        
        temp = int(temp / 10);
         
        decimal_value = decimal_value + last_digit * base;
        base = base * 2;
    return decimal_value;

#driver program example:
  # num = 10100;
  # print(binaryToDecimalconv(num));
#output = 20

def decimaltobinaryconv(j):
   if j > 1:
       decimaltobinaryconv(j//2)
   print(j % 2,end = '')

#driver program example:
 # dec = 20;
 # decimaltobinaryconv(dec)
 # print()
#output = 10100
