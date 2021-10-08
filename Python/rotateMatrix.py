
# Function to rotate a matrix
def rotateMatrix(mat):
 
    if not len(mat):
        return
     
 
    top = 0
    bottom = len(mat)-1
 
    left = 0
    right = len(mat[0])-1
 
    while left < right and top < bottom:
        # current row
        prev = mat[top+1][left]
 
        # Move elements of top row one step right
        for i in range(left, right+1):
            curr = mat[top][i]
            mat[top][i] = prev
            prev = curr
 
        top += 1
 
        # Move elements of rightmost column one step downwards
        for i in range(top, bottom+1):
            curr = mat[i][right]
            mat[i][right] = prev
            prev = curr
 
        right -= 1
 
        # Move elements of bottom row one step left
        for i in range(right, left-1, -1):
            curr = mat[bottom][i]
            mat[bottom][i] = prev
            prev = curr
 
        bottom -= 1
 
        # Move elements of leftmost column one step upwards
        for i in range(bottom, top-1, -1):
            curr = mat[i][left]
            mat[i][left] = prev
            prev = curr
 
        left += 1
 
    return mat
 
# Function to print matrix
def printMatrix(mat):
    for row in mat:
        print (row)


#matrix
M, N = input().split()

M, N = int(M), int(N)

matrix = []

for _ in range(M):

	row = [int(x) for x in input().split()]

	matrix.append(row)

K = int(input())

for i in range(K):
    mat = rotateMatrix(matrix)

printMatrix(mat)