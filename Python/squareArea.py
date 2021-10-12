def square_area(matrix,l_x,l_y,side_length):
    
  count=0

  for i in range(l_x,l_y+side_length):

    for j in range(l_y,l_y+side_length):

      if matrix[i][j]==1:

          count+=1

      else:

        return 0

  return count 

m,n=map(int,input().split())

markers={'X':1,'O':0}

matrix=[[markers[i] for i in input().split()] for _ in range(m)]

areas=[]

for l_x in range(m):

  for l_y in range(n):

    for side_length in range(1,min(n-l_y+1,m-l_x+1)):

      areas.append(square_area(matrix,l_x,l_y,side_length))

print(max(areas))