N = int(input("Enter the number of N: "))  
  
n = 2 * N - 2  
for i in range(0, N):  
    for j in range(0, n):  
        print(end=" ")  
    n = n - 1  
    for j in range(1, i + 1):  
        print(j, end=" ")  
    print("")  
  

n = N - 2  
for i in range(N, -1, -1):  
    for j in range(n, 0, -1):  
        print(end=" ")  
    n = n + 1  
    for j in range(1, i + 1):  
        print(j, end=" ")  
    print("")  
