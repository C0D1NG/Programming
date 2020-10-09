def main():

    number = int(input('Enter de number to check: '))
    print(f'{number} {checkPrime(number)}')

    return

def checkPrime(number):

    check = 1

    for i in range(1, number):
        if number % i == 0:
            check += 1

    if check != 2:
        return 'is not prime'
    else:
        return 'is prime'

main()