import sys

def factorial(number):
    return number * factorial(number-1) if number > 1 else (1 if number == 0 else number)

def main():
    print(factorial(int(sys.argv[-1] if len(sys.argv) == 2 else input("Number: "))))
    input()

if __name__ == "__main__":
    main()
