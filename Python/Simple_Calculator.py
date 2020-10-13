import math
def add(s,t):
    print('sum of',s,'and',y,'is',s+t)
def sub(s,t):
    print('difference of',s,'and',y,'is',s-t)
def mul(s,t):
    print('product of',s,'and',y,'is',s*t)
def div(s,t):
    print('quotient of',s,'and',y,'is',s/t)
    


q='y'
while q=='y':
    x=int(input('enter the first number: '))
    y=int(input('enter the second number: '))

    if x<y:
        x,y=y,x
        
    print('''Enter 1 for additon
Enter 2 for subraction
Enter 3 for multiplication
Enter 4 for division
    ''')
    a=int(input('what operation do you want? '))
    if a==1:
        add(x,y)
    elif a==2:
        sub(x,y)
    elif a==3:
        mul(x,y)
    elif a==4:
        div(x,y)
    else:
        print('Operation not defined ')
    q=str(input('do you want to continue enter y: '))
