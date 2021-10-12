M, N = (map(int, input('Enter two space separated in M N: ').split()))
matrix = []
area = 0
for i in range(M):
	matrix.append(list(input().split()))

# max_x_area(matrix)
def all_x(matrix):
	for row in matrix:
		for el in row:
			if el != 'X':
				return False
	return True


def sub_seq(lst):
	s = len(lst)
	for start in range(s):
		for end in range(start+1, s+1):
			yield (start, end)


for s_r, e_r in sub_seq(list(range(M))):
	for s_c, e_c in sub_seq(list(range(N))):
		if all_x([i[s_c:e_c] for i in matrix[s_r:e_r]]):
			tmp_area = (e_r - s_r) * (e_c - s_c)
			if tmp_area > area:
				area = tmp_area
print(area)
