width = 60

char = "#"
space = " "
minus = "-"

bs = "\b"

sp = char
rp = 2 * minus
ep = bs + "@"


def pattern(n: int):
    return "\n".join([line(_,width) for _ in range(n)]) + "\n" + "\n".join([line(_,width) for _ in range(n)][n-1::-1])

def leading_space(n: int,w: int):
    return (w - n)*space

def line(n: int,width: int):
    return leading_space(n,width) + start(n) + repeat(n) + end(n)

def start(n: int):
    return sp

def repeat(n: int):
    return n*rp

def end(n: int):
    return ep


print(pattern(10))