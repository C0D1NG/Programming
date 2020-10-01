import fractions
import math
a = list(map(int,input().split()))
first = a[0]
second = a[1]
gcd = math.gcd(first,second) 
for i in range (2,len(a)):
    x = math.gcd(gcd,a[i])
print(x)
