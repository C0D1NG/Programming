def largest(arr,n): 
  
    #let 0th element is largest 
    max = arr[0] 
  
   #compare all elements of array one by one and if any element
   # is bigger than max, then replace max by that element 
    for i in range(1, n): 
        if arr[i] > max: 
            max = arr[i] 
    return max
 
arr = [5,10,1,9,20,7] 
length = len(arr) 
largest_element = largest(arr,length) 
print ("Largest element in array is",largest_element) 
