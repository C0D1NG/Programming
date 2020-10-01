#########################################
### CODE TO CONVERT BINARY TO DECIMAL ###
#########################################

def binaryToDecimal(num):
  dec_left = 0
  # before decimal point
  temp_left = int(num)
  base_left = 1
  while(temp_left):
    last_digit = temp_left % 10
    temp_left = int(temp_left / 10)
    dec_left += last_digit * base_left
    base_left *= 2

  dec_right = 0
  # after decimal point
  temp_right = str(num).split('.')[1]
  base_right = 1/2
  for i in temp_right:
    dec_right += int(i) * base_right
    base_right /= 2

  decimal = dec_left + dec_right
  return(decimal)


# Driver Code
num = float(input("Binary Number: "))
print("Decimal Number = ", binaryToDecimal(num))

# Example - 
# 101.01 in Binary = 5.25 in Decimal

# This is contributed by Ashish Kumar.