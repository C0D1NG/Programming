sentence = input("Input sentence: ")
sent_split = sentence.split()
sent_split.sort(reverse = True)
result = []
for word1 in sent_split:
    for word2 in sent_split:
        result.append(word1 + " " + word2)
       
result = set(result)
result = list(result)
result.sort()


for item in result:
    if item in sentence:
        result.remove(item)
        
for item in result: 
    if " ".join(item.split()[::-1]) in sentence:
        result.remove(item)
        
for item in result:
    item_spl = item.split()
    if (item_spl[0] == item_spl[1]) and (sentence.count(item_spl[0]) < 2):
        result.remove(item)
        
for item in result:
    item_spl = item.split()
    duplicates = item_spl[1] + " " + item_spl[0]
    if duplicates in result:
        result.remove(duplicates)
results=[]
for item in result:
    item=item.split()
    if item[1]<item[0]:
        temp=item[1]
        item[1]=item[0]
        item[0]=temp
    item = item[0]+" "+item[1]
    results.append(item)
results.sort()
for item in results:        
    print(item)