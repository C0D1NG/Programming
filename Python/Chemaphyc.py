M=int(input("Maths: "))
P=int(input("Physics: "))
C=int(input("Chemistry: "))
if ((M+P)>=100 or (M+C)>=100 or (P+C)>=100) and (M+P+C)>=180:
    print("True")
else:
    print("False")
