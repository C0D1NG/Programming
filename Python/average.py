n=int(input("Enter the number of elements to be inserted: "))

a = [int(i) for i in input().split()][:n]
avg=sum(a)/n
print("Average of elements in the list", round (avg, 2))