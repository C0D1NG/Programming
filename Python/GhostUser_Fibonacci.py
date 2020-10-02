def fibonacci(n):
    if n==0:
        return 0
    elif n<=2:
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)
    
def fibSeries(n):
    arr=[]
    for i in range(1,n+1):
        arr+=[fibonacci(i)]
    return arr

n=int(input())
result=fibSeries(n)
print(*result)