# Fuction that check if "X" is present or not and returns False when X is not
def X_Only(Matrix:list):
    for row in Matrix:
        for cell in row:
            # check if value is not X
            if cell!='X':
                return False
    return True

#Function that returns where max_matrix starts and ends at.
def sub_size(lent:int):
    for start in range(lent):
        for stop in range(start+1, lent+1):
            yield(start, stop)

#Function that caculate maximum area of square with many X
def squareAreaWithX(matr:list, M:int, N:int):
    maximum_area = 0
    for begin_x, stop_x in sub_size(M):
        for begin_y, stop_y in sub_size(N):
            temp_matrix = [i[begin_y:stop_y] for i in matr[begin_x:stop_x]]
            if X_Only(temp_matrix):
                x= stop_x-begin_x
                y= stop_y-begin_y
                if maximum_area < x*y:
                    maximum_area=x*y
    #print maximum area of square
    print(maximum_area)

while True:
    # m, n = (map(int, input().split()))
    s = input()
    M, N = [int(i) for i in s.split()]
    #Enter matrix values
    matrix = list([] for i in range(N))
    for i in range(M):
        matrix[i]=list(input().split())
    #calculate area of the largest X matrix
    squareAreaWithX(matrix, M, N)