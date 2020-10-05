n = input("Enter number in range 1-4000:")
k = int(n)
a = []
if(k<=4000):
    while(k>0):
        if (k>=1000):
            a.append('m')
            k = k-1000
        elif(k>=900):
            a.append('cm')
            k = k-900
        elif(k>=500):
            a.append('d')
            k = k-500
        elif(k>=400):
            a.append('cd')
            k = k-400
        elif(k>=100):
            a.append('c')
            k = k-100
        elif(k>=90):
            a.append('xc')
            k = k-90
        elif(k>=50):
            a.append('l')
            k = k-50
        elif(k>=40):
            a.append('xl')
            k=k-40
        elif(k>=10):
            a.append('x')
            k = k-10
        elif(k>=9):
            a.append('ix')
            k = k-9
        elif(k>=5):
            a.append('v')
            k = k-5
        elif(k>=4):
            a.append('iv')
            k = k-4
        else:
            a.append('i')
            k = k-1
    for i in range(len(a)):
        print(a[i], end=''),
else:
    print('number invalid')