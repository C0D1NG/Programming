def Reverse(Number):  
  rev = 0while(Number > 0):
    rem = Number %10
    rev = (rev *10) + rem
    Number = Number //10return rev

Number = int(input())
rev = Reverse(Number)  
print("%d" %rev)