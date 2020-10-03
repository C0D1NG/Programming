while (1):
    try:
        print("Enter q to quit.")
        n = input("Enter the Number You want to check Even or Odd\n")
        if n == 'q':
            break
        elif int(n) % 2 == 0:
            print(f"{n} is Even\n")
        elif int(n) % 2 != 0:
            print(f"{n} is Odd\n")

    except Exception:
        print("Incorrect Input")
        print("Please try Again\n")
        
