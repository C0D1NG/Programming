def rearrangeNo(sentence):
    temp0 = list(sentence)
    temp1 = [c if c.isdigit() else ' ' for c in temp0 ]
    temp2 = "".join(temp1)
    temp3 = temp2.split()
    numbers = []
    for w in temp3:
        numbers.append(int(w))
    if len(numbers) < 2:
        return sentence
    numbers.sort(reverse=True)
    result_string = ''
    i = 0
    while i < len(sentence): 
        c = sentence[i]
        if not c.isdigit():
            result_string += c
        else:
            result_string += str(numbers[0])
            numbers = numbers[1:]
            while sentence[i].isdigit():
                i+=1
            result_string += sentence[i]
        i+=1
    return result_string

print(rearrangeNo(input()))