integers = [int(number) for number in input("Enter array of integers: ").split()]
K = int(input("K = "))


triplets = []


for i in range(len(integers)):
    for j in range(i+1,len(integers)):
        for k in range(j+1, len(integers)):
            
            a = integers[i]
            b = integers[j]
            c = integers[k]


            if a+b+c == K:
                triplets.append(tuple((a,b,c)))
#sorting every item in triplet
sorted_triplets=[]
for tripl in triplets:
    item = sorted(tripl)
    sorted_triplets.append(item)

#sorting the whole triplets
triplets= sorted(sorted_triplets)
if len(triplets)!=0:
    for triplet in triplets:
        triplet=sorted(triplet)
        print(triplet)


else:
    print("No Matching Triplets Found")