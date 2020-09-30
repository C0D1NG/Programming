for i in range(int(input())):
    n = int(input())
    count = 0
    for i in range(1, n):
        if (n % i == 0):
            count += i
    if count == n:
        print("YES")
    else:
        print("NO")