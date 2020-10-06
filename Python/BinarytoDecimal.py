#binary to decimal

a=input('enter a binary code: ')
a=a[::-1]
print('Binary code:',a)
b=[]
for x in a:
    b=b+[int(x)]
n=0
s=0
for i in b:
    if i==1:
        s+=i*(2**n)
    n+=1
print('Decimal conversion:',s)
