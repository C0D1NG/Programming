sentence = input("Enter sentence: ")
sentence = sentence.lower().split()
lentgth = len(sentence)
result = []
for i in range(lentgth):
	for j in range(lentgth):
		if i == j:
			continue
		else:
			tmp = sentence[i] + sentence[j]
			if tmp == tmp[::-1]:
				result.append([i, j])
if len(result) == 0:
	print(-1)
else:
	for every in result:
		print(*every)
