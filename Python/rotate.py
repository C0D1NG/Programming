sentences = input('Enter string: ')
L, K = [int(i) for i in input().split()]
source = [i for i in sentences.split()] 

result = []
def rotate(strings, k):
    for i in range(k):
        c = strings[-1]
        strings = strings[0:-1]
        c += strings
        strings = c
    return strings

for cha in source:
    if len(cha) > L:
        result.append(rotate(cha, K))
    else:
        result.append(cha)
final = result[0]

for cha in result[1:]:
    final += ' '
    final += cha

print(final)