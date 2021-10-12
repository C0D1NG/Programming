N = int(input('How many trains:'))

print("Please Enter the arrival times:")
arrival = [int(i) for i in input().split()][:N]

print("Please Enter the departure times:")
departure = [int(i) for i in input().split()][:N] 
 
def minPlatform(arr, dep, n):
     
    # Sort arrival and
    # departure arrays
    arr.sort()
    dep.sort()
 
    # number of platforms
    plat_needed = 1
    result = 1
    i = 1
    j = 0
 
    while (i < n and j < n):
        # platforms needed to be incremented or decremented
        if (arr[i] <= dep[j]):
 
            plat_needed += 1
            i += 1
 

        elif (arr[i] > dep[j]):
 
            plat_needed -= 1
            j += 1
 
        # Update result if needed
        if (plat_needed > result):
            result = plat_needed
 
    return result

print(minPlatform(arrival, departure, N))
