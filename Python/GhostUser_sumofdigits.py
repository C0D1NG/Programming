#Sum of digits in Python
#Author : @GhostUser

n=input()
n=(list(n))
arr=[]
for i in range(len(n)):
    arr+=[int(n[i])]
print(sum(arr))