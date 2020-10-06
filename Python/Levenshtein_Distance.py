def Levenshtein_Distance(SOURCE, TERM):
    
    rows = len(SOURCE)+1
    cols = len(TERM)+1
    distance = [[0 for i in range(cols)] for i in range(rows)]
    print(distance)

    # source prefixes can be transformed into empty strings 
    # by deletions:
    for X in range(1, len(SOURCE)+1):
        distance[X][0] = X
    # target prefixes can be created from an empty source string
    # by inserting the characters
    for Y in range(1, len(TERM)+1):
        distance[0][Y] = Y
        
        
    for col in range(1, cols):
        for row in range(1, rows):
            if SOURCE[row-1] == TERM[col-1]:
                cost = 0
            else:
                cost = 1
            distance[row][col] = min(distance[row-1][col] + 1,  # deletion
                                 distance[row][col-1] + 1,      # insertion
                                 distance[row-1][col-1] + cost) # substitution
            

    for R in range(rows):
        print(distance[R])
    
 
    return distance[row][col]
