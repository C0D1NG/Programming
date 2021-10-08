strng = input()  

char_freq = {}
  
for i in strng:
    if i in char_freq:
        char_freq[i] += 1
    else:
        char_freq[i] = 1
  
# printing result 
print (str(char_freq))