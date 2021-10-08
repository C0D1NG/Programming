M, N = input("two integers in increasing order: ").split(' ')
M = int(M)
N=int(N)
matrix = []
for m in range(M):
	row = [int(x) for x in input().split(' ')]
	matrix.append(row)

#getting all the matrix elemnts into list for easy sorting
elements = [x for row in matrix for x in row]

#sortthw elemwnts
elements.sort()

#creationg copy of matrix to the new vasriable
output = matrix

#getting the sorted elements into matrix
for i in range(M):
	for j in range(N):
		matrix[i][j] = elements[i * M + j]

#print matrix elements
for item in matrix:
    print(item)