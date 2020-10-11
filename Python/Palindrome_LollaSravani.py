number = int(input("Enter a number:")) #take a number as an input
number_copy = number #copy that number to a variable so that we can use it later
reverse_number=0
while(number>0): #loop to reverse all the digits in the number and store them in another variable(reverse_number)
    reverse_number=reverse_number*10+(number%10) #(number%10) gives the last digit of the number and we add that digit to the next 10ths place of the reverse_number(reverse_number*10)
    number=number//10 # the number is floor divided by 10 to get the next digit of the number from right to left
if(number_copy==reverse_number): #check if the reversed number is equal to the original number
    print("The number is palindrome!") #if 'yes' then it is a palindrome
else:
    print("The number is not a palindrome!") #if 'no' then it is not a palindrome