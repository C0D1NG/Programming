displayList=[]
levelsList=[3,4,5,6,7,85,34]

for i in range(0,len(levelsList)):
    subList=[] 
    priceLevelLabel=["Price Level",levelsList[i]]
    spacePrice=' '.join(map(str, priceLevelLabel))
    print(spacePrice)
    subList.append(spacePrice)
    displayList.append(subList)
print(displayList)