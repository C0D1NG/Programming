play=True
while play:   
    score1=int(input("Score 1: "))
    score2=int(input("Score 2: "))
    player1Wins=0
    player2Wins=0
    player1Losses=0
    player2Losses=0
    tieCount=0

    if (score1 > score2):
        print("player1 wins")
        player1Wins += 1
        player2Losses += 1
    elif (score2 > score1):
        print("player2 wins")
        player1Losses += 1
        player2Wins += 1
    else:
        print("tie")
        tieCount += 1
