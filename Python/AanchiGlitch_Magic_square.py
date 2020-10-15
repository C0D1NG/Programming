# A program to print magic square.

def magic_square(n):
    
    magicSquare = []
    for i in range(n):
        l = []
        for j in range(n):
            l.append(0)
        magicSquare.append(l)
    
    i = n//2  #as 1.5 or any another won't mean much to n so floor value used
    j = n-1
    
    num = n*n
    count = 1
     
    
    while(count<= num):
        if(i == -1 and j == n ):
            j = n - 2
            i = 0
        else:
            if(j == n):
                j = 0
            
            if(i < 0 ):
                i = n-1
            
        if(magicSquare[i][j]!= 0):
            j = j-2
            i = i+1
            continue
        else:
            magicSquare[i][j] = count
            count += 1
        
        i = i-1
        j = j+1
        
    for i in range(n):
        for j in range(n):
            print(magicSquare[i][j], end = " ")
        print() 
    print("\nThe sum of each row/coloumn/diagonal is: " +str(n*(n**2 + 1)/2))


# Driver Code
n = int(input("Enter the size of magic square to be printed: "))            
magic_square(n)

'''
Time Complexity : O(n^2)

Sample I/O:

Input :
Enter the size of magic square to be printed: 3

Output :
2 7 6                                                                                                                         
9 5 1                                                                                                                         
4 3 8      

The sum of each row/coloumn/diagonal is: 15.0
'''
