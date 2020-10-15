# Heapsort algorithm

# Define a function that sorts a maxtree
maxheap = function(x, n, i){
  # Define the largest of the 'branch' as the initial
  largest = i
  # Set the element location for the left node and right node
  left = 2*i
  right = 2*i +1
  
  # Check that the left branch is bigger than the initial
  if ( (left<n) & (x[largest] < x[left]) ){
    largest = left
  }
  
  # Check that the right branch is bigger than the initial
  if ( (right<n) & (x[largest] < x[right]) ){
    largest = right
  }
  
  # From the above two if satatements we have the biggest value in this branch
    
  # Swap the values if required
  if (largest != i){
    x[c(i, largest)] = x[c(largest, i)]
    
    # Maxheap your new heap
    x = maxheap(x, n, largest)
  }
  return(x)
}

# Define a function for Heapsort
# use this fucntion to call the algorithm
heapsort = function(x){
  n = length(x)
  
  # Builds the maxheap
  for (i in floor(n/2):1){
    x = maxheap(x, n, i)
  }
  
  # Extracts each element, one by one, if it is the largest
  for (i in n:1){
    x[c(i,1)] = x[c(1,i)]
    x = maxheap(x, i, 1)
  }
  
  # if statement to make sure the last two elements of x to be in the correct order  
  if (x[n]<x[n-1]){x[c(n,n-1)] = x[c(n-1,n)]}
  
  return(x)
}
