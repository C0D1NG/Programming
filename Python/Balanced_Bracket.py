opening_list = ["[", "{", "("]

closing_list = ["]", "}", ")"]
strings = input("Enter the set of parenthesis: \n")


stack = []

for j in strings:

	if j in opening_list:

		stack.append(j)

	elif j in closing_list:

		position = closing_list.index(j)

		if ((len(stack) > 0) and (opening_list[position] == stack[len(stack) - 1])):

			stack.pop()


if len(stack) == 0:

	print(strings, "- Balance")

else:

	print( strings,"- Unbalance" )  