N = int(input("Enter N value:"))
K = []
nos = [2, 3, 4, 5, 6, 7, 8, 9, 10]
for i in range (1,N+1):
    for value in nos:
        if N % i == 0 and i % value!=0:
            K.append(i)
#removing duplicates
K = list(set(K))    
print(tuple(K))
print ("Total numbers of K are:")
