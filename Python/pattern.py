def X_Only(Matrix:list):
    for row in Matrix:
        for cell in row:
            # check if value is not X
            if cell!='X':
                return False
    return True
def sub_size(lent:int):
    for start in range(lent):
        for stop in range(start+1, lent+1):
            yield(start, stop)
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
    print(maximum_area)
while True:
    s = input()
    M, N = [int(i) for i in s.split()]
    matrix=[]
    for i in range(0,M):   
        matrix.append([N for N in input().split()]) 

    squareAreaWithX(matrix, M, N)
