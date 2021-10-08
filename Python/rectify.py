key = 'abcdefghijklmnopqrstuvwxyz'


def sec_msg(msg, key):
	res = ''
	for i in range(len(msg)):
		letter = msg[i]
		if letter in key:
			res += str(key.index(letter)+1)
		else:
			res += letter
		if (i+1) < len(msg) and msg[i+1] != ' ' and letter != ' ':
			res += '-'
	return res

inputString = input()
String = inputString.lower()
print(sec_msg(String, key))
