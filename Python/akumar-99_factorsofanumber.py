############################
### FACTORS OF A NUMBER  ###
############################

n = int(input("Enter number: "))

print("The factors of {} are : ".format(n), end=" ")
for i in range(1, n + 1):
  if n % i == 0:
      print(i, end=", ")

# This is contributed by Ashish Kumar.