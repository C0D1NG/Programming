# This below method uses while loop for the execution of function:
def count_down_from(number):
   start = number
      if start <= 100:
            while start >0:
            print (start)
            start -= 1
    else :
        print("Please Enter Correct Value")        
number = int(input("Enter the number: "))
count_down_from(number)        



#This below method uses recursion function for the execution of the process:
def count_down_from(number):
    if number <= 0:
        return 
    print(number)
    count_down_from(number - 1)

count_down_from(10)
