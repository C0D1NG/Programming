def perfect_number(m):
    sum = 0
    
    for x in range(1, m):
        if m % x == 0:
            sum += x
    return sum == m
m=int(input)    
print(perfect_number(m))
