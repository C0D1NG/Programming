M, N = input().split(' ')
M, N = int(M), int(N)
matrix = []
for _ in range(M):
	row = [int(x) for x in input().split(' ')]
	matrix.append(row)


K = int(input())


values = matrix[0][:-1] + [x[-1] for x in matrix][:-1] + matrix[-1][::-1][:-1] + [x[0] for x in matrix][::-1][:-1]


values = values[-K:] + values[:-K]
print(values)


output = matrix


idxs = [(0, j) for j in range(N)][:-1] + [(i, N - 1) for i in range(M)][:-1] + [(M - 1, j) for j in range(N)][::-1][:-1] + [(i, 0) for i in range(M)][::-1][:-1]


idx = 0
for i, j in idxs:
	output[i][j] = values[idx]
	idx += 1


print(output)