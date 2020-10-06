def hcf(a,b):
    while a :
        if a == min(a,b):
            a,b = b,a    
        a = a % b 
    return b        

print('Program to find HCF\n')
run = True
while run :
    print('Enter 2 Numbers : ')
    x,y = map(int,input().split())
    ans = hcf(x,y)
    print(ans)
    s = input('Do You Want to Exit (y/n)')
    if s == 'y':
        run = False    

