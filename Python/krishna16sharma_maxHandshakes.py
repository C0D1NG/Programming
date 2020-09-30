"""To get the maximum number of handshakes a person would have to shake hands
    with every other person. So the first person would have N-1 people to shake
    hands with. The next person would have N-2(since he already shook hands
    with the first one.
    It is easy to see the pattern here.
    Total number of handshake = N-1 + N-2 +….+ 1 + 0
    This is just ((N-1)*N/2)
    Complexity : O(1)"""
def maxHandshake(n): 
    return int((n * (n - 1)) / 2)

if __name__=="__main__":
    print("How many people?")
    n = int(input()) #n is the number of people present
    print(str(maxHandshake(n))+" handshakes.")
