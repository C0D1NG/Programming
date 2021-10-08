month = {
	1:'January',
	2:'February',
	3:'March',
	4:'April',
	5:'May',
	6:'June',
	7:'July',
	8:'August',
	9:'September',
	10:'October',
	11:'November',
	12:'December'}


try:
	n = int(input('enter the month number: '))
	print(month[n])
except (ValueError):
    print('Please enter numbers only.')
except(KeyError):
    print('Please enter integer between 1 and 12')
