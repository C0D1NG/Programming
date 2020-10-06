#################################
### LARGEST ELEMENT IN ARRAY  ###
#################################

n = int(input("Enter no of elements: "))
arr = []
for i in range(n):
  arr.append(int(input("Enter value {}: ".format(i))))

max = arr[0]
for i in range(0, len(arr)):    
   if(arr[i] > max):    
       max = arr[i]

print("Largest element present in given array: " + str(max))

# This is contributed by Ashish Kumar.
