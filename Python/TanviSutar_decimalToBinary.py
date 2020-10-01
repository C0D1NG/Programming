def decimaltobinary(n):
    lst = []
    while n > 0:
        lst.append(n%2)
        n = int(n/2)
    return lst[::-1]

def binarytodecimal(lst):
    summ = 0
    j = 0
    lst = lst[::-1]
    print(lst)
    for i in lst:
        if i:
            summ += 2**j 
        j += 1
    return summ

# n = int(input('Enter a decimal number: '))
# print('Binary form of the given number is: ')
# lst = list(map(str,decimaltobinary(n)))
# print(''.join(lst))
lst = list(map(int,input().split()))
print(lst)
print(binarytodecimal(lst))