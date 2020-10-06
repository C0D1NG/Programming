def getFib(n, base={1: 0, 2: 1}):
    if n in base:
        return base[n]
    else:
        base[n] = getFib(n-1, base) + getFib(n-2, base)
        return base[n]


n = int(input())
print("%d" % getFib(n))
