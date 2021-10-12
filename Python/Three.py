f=int(input("Enter the First: "))
s=int(input("Enter the Second: "))
t=int(input("Enter the Third: "))
min=0
if f<s and f<t:
    min=f
elif s<f and s<t:
    min=s
else:
    min=t
avr=(f+s+t)/3
print("Average is ",avr)
if f%avr==0:
    print("The average is divisible by ",f)
    print("\nThe average is not divisible by ",s)
    print("\nThe average is not divisible by ",t)

elif s%avr==0:
    print("\n The average is divisible by ",s)
    print("\nThe average is not divisible by ",f)
    print("\nThe average is not divisible by ",min)
    print("\nThe average is not divisible by ",min)


elif t%avr==0:
    print("\nThe average is divisible by ",t)
    print("\nThe average is not divisible by ",s)
    print("\nThe average is not divisible by ",f)
    print("\nThe average is not divisible by ",min)

elif t%min==0:
    print("\nThe average is Not divisible by ",t)
    print("\nThe average is not divisible by ",s)
    print("\nThe average is not divisible by ",f)
    ("\nThe average is divisible by ",min)

else:
    print("\nThe average is not divisible by all")
