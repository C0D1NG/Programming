N = int (input())

lines = []
for i in range(N):
    lines.append(input())

lines.sort(key=lambda x: int(x.split()[0]),  reverse=True)

first = True
for line in lines:
    Pi = int(line.split()[0])
    Ci = int(line.split()[1])
    
    if first:
        if Ci == 0 and Pi == 0:
            print('0')
            break
        
        if Ci == 1 and Pi != 0:
            pass
        elif Ci == -1 and Pi != 0:
            print('-', end='')
        else:           
            print(f'{Ci}', end='')
        first = False
        
    else:        
        if Ci > 0:
            print(' + ', end='')
        elif Ci < 0:
            print(' - ', end='')
        else:
            continue
        print(f'{abs(Ci)}', end='')    
    
    if Pi == 0:
        continue
    if Pi == 1:
        print('x', end='')
    else:
        print(f'x^{Pi}', end='')    

print()
