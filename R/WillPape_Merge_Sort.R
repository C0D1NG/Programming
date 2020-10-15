# Merge sort

# We need two functions
#  A) one to split the vector into half and then recursively repeats until we have split into 1's
#  B) another to merge the vectors when they are already sorted, this is used within the above algorithm


Merge = function(x1, x2){
  n = length(x1); m = length(x2)  # Defining the length of vectors x1 and x2
  z = integer (n+m)               # Defining the vector z to store the sorted merged x1, x2
  
  i = 1; j = 1; k = 1   # Define i, j, k as first position x1, x2, z respectively
  
  a = x1[1]   # Defining the variables a and b which are the smallest
  b = x2[1]   # values of x1 and x2 respectively

  while (k<(m+n+1)){  # Once k = m+n+1 we have filled z
    if (a <b){        # x1 smallest value less than x2 smallest value
      z[k] = a        # set z[k] to the smallest x1
      if (i < n){     # Check to see if all of x1 has been sorted
        a = x1[i+1]   # if it hasn't then iterate to next x1
        i = i+1       #  
      }else{          # If it has been used up then set a to inf to ensure b<a always
        a = Inf       
      }               
    }else{            # x2 smallest value less than x1 smallest value
      z[k] = b        # set z[k] to the smallest x2
      if (j<m){       # Check to see if all of x2 has been sorted
        b = x2[j+1]   # if it hasn't then iterate to next x2
        j = j+1       # 
      }else{          # If it has been used up then set b to inf to ensure a<b always
        b = Inf       
      }
    }
    k = k+1   # Increase k to go to next number along in z
  }
  return (z)
}

# Function that splits the vector in half
Split = function(x){
  n = length (x)
  if (n==1){
    s = x
  }else{
    m = ceiling (n/2)
    s1 = Split(x[1:m])
    s2 = Split(x[(1+m):n])
    s = Merge (s1, s2)
  }
  return(s)
}

# Callable function to run the merge sort algorithm on vector x
MergeSort = function(x){
  l = length(x)
  for (i in 1:l){
    sort = Split(x)
  }
  return (sort)
}