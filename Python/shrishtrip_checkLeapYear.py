# An interesting link to understand why these
# weird checks to find leap year
# https://www.quora.com/Whats-the-logic-behind-a-C-program-to-check-whether-a-year-is-a-leap-year-or-not

def isLeap(year):							# Method to find leap or not
	if year%400==0:							# check no. 1
		return True				
	elif (year%4==0) and (year%100!=0):		# Check no 2
		return True			
	return False							# Else always False


def main():												# Driver function
	print("Enter a valid year to check for leap year...")	# Prompting for the input
	year = int(input())									# Scanning the input
	if isLeap(year):									# Calling the helper function
		print("It's a leap year.")						# If True returned print yes
	else:
		print("It's not a leap year.")					# Else print False




# Using the special variable  __name__ 
if __name__=="__main__": 
    main() 