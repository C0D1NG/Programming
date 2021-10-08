N = int(input("Enter the number of rows: "))  
def triangle(n):
    # outer loop to handle number of rows  
    for i in range(0, n):  
        # inner loop to handle number of columns  
        # values is changing according to outer loop  
            for j in range(0, i + 1):  
                # printing stars  
                print("* ", end="")       
    
            # ending line after each row  
            print() 

#printing first triangle
triangle(N)

#printing second triangle
triangle(N)
