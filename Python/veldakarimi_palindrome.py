palindrome = input("Enter any string: ")

# make it suitable for caseless comparison
palindrome = palindrome.casefold()

# reverse the string
rev_str = reversed(palindrome)

# check if the string is equal to its reverse
if list(palindrome) == list(rev_str):
   print("The string is a palindrome.")
else:
   print("The string is not a palindrome.")