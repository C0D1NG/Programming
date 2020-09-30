'''
Using recursion
'''
def fibRecursive(n):
    if n == 1 or n == 2:
        return 1
    
    return fibRecursive(n-1) + fibRecursive(n-2)


'''
Using recursion with memoization
'''

def fibRecursiveMemoization(n):
    fib = {1:1, 2:1}

    if n in fib:
        return fib[n]
    else:
        result = fibRecursiveMemoization(n-1) + fibRecursiveMemoization(n-2)
        fib[n] = result
        return result


'''
Using iteration (For loop)
'''
def fibIterative(n):
    current = 1
    prev  = 1

    if n == 1 or n == 2:
        return 1
    else:
        for _ in range (3, n+1):
            result = current + prev
            prev, current = current, result
        
        return result
