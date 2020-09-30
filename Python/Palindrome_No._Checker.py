def check(number):
    new_number = ""
    number = str(number)
    char_no = len(number)-1

    while len(number) != len(new_number):
        new_number += number[char_no]
        char_no -= 1
    new_number = int(new_number)
    return new_number


no = int(input("Enter the number to be checked for palindrome :"))
palindrome = check(no)
if no == palindrome:
    print("Your number is a palindrome number !")
else:
    print("Your number is not a palindrome number .")

input("Press the ENTER key to exit ...")
