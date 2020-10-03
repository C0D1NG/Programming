def reverseNum (n : int) -> int :
    return int(str(n)[::-1])

if __name__ == "__main__" :
    n = int(input("Enter the number: "))
    print("Reverse of the number is: " + str(reverseNum(n)))
