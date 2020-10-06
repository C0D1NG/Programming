def smiley_faces(smile_string):
    len_string = len(smile_string)
    score = 0
    for i in range(1, len_string):
        smile = smile_string[i - 1] + smile_string[i]
        print(smile)
        if smile in [":)", "(:"]:
            score += 1
        elif smile in (":(", "):"):
            score -= 1

    return score
