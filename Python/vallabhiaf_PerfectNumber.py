def perfect_number(n):
    sum = 0
    
    for x in range(1, n):
        if n % x == 0:
            sum += x
    return sum == n
m=int(input)    
print(perfect_number(m))
