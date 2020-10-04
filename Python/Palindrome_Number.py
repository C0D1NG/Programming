def isPalindrome(num):
	tmp=num
	res=0
	while(num>0):
	    dig=num%10
	    res=res*10+dig
	    num=num//10
	if(tmp==res):
	    print("The number is palindrome!")
	else:
	    print("Not a palindrome!")

isPalindrome(12321)
