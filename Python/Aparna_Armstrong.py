def ArmStrong(n):
    string= str(n)
    length=len(string)
    sum_count=0
    for i in string:
        sum_count+=pow(int(i),length)
    if(sum_count==n):
        print("It is an Armstrong number")
    else:
        print("It is not an Armstrong number")

print("Enter a number to check if it is armstrong or not :")
n=int(input())
ArmStrong(n)