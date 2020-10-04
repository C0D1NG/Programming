def digitSum(a):
    sum1 =0
    while a!=0:
        sum1 += int(a%10)
        a = int(a/10)
    return sum1