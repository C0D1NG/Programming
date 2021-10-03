#greets the person based on the time on day

name = input("What is your name ")
if input("Is it the morning? ") =="y":
    print("Good Morning "+name)
elif input("Is it the afternoon? ") =="y":
    print("Good Afternoon "+name)
else:
    print ("Goodnight "+name)