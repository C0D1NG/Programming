arr = list(map(int,input().split()))
largest = arr[0]

for ele in arr:
    if(ele > largest):
        largest = ele
print(largest)