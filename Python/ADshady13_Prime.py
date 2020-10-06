def isprime(a):
    c =0
    if a ==1:
        return 'Not Prime'
    for i in range(2,a):
        if a%i ==0:
            c+=1
    if c==0:
        return 'Prime'
    else:
        return 'Not Prime'