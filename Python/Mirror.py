alphabets = "abcdefghijklmnopqrstuvwxyz"
alphabets_Upper = alphabets.upper()
mirror = "zyxwvutsrqponmlkjihgfedcba"
mirror_Upper = mirror.upper()
table = "".maketrans(alphabets+alphabets_Upper, mirror+mirror_Upper)

while True:
    strin = input("Source string: ")
    if len(strin)==0:
        break
    output = strin.translate(table)
    output=output.lower()
    print("Secret Message: ", output)