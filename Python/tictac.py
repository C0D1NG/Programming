def tictac():
    board = []
    for r in range(3):
        line = input()
        board.append(line.split())
    for r in range(3):
        if board[r][0] == board[r][1] == board[r][2]:
            result = board[r][0]
            
    for c in range(3):
        if board[0][c] == board[1][c] == board[2][c]:
            result = board[0][c]
    if board[0][0] == board [1][1] == board [2][2]:
        result = board[0][0]
        
    if board[0][2] == board [1][1] == board [2][0]:
        result = board[0][2]
    else:
        result = "None"
    return result

while True:
    print("Its you chance to play.")
    result = tictac()
    if result.upper() == 'X':
        print('Anjali Wins')
    elif result.upper() == 'O':
        print('Abhinav Wins')

    else:
        print("No one wins. \n Good bye")
        exit()

