import sys

def evenOrOdd(number):
    return True if number % 2 == 0 else False

def main():
    print("Even" if evenOrOdd(int(sys.argv[-1] if len(sys.argv) == 2 else input("Number: "))) else "Odd")
    input()

if __name__ == "__main__":
    main()
