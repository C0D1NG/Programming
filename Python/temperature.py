T = input("Enter the Temperature(T) and Scale(C,F,K) without any space: ")

Scale=T[-1]
T=T[0:len(T)-1]
T=float(T)



# When Scale is Celsius
if Scale=='C':
	F=(9/5)*int(T) + 32
	print("Temerature in Celsius",round(T, 2))
	print("Temerature in Kelvin",(T+273))
	print("Temerature in Fahrenheit",round(F, 2))


# When Scale is Fahrenheit
elif Scale=='F':
	C=(float(T)-32)*(5/9)
	K=C+273
	print("Temerature in Fahrenheit",round(T,2))
	print("Temerature in Celsius",round(C,2))
	print("Temerature in Kelvin",round(K,2))


# When Scale is Kelvin
elif Scale=='K':
	C=float(T)-273
	F=(9/5)*int(C) + 32
	print("Temerature in Kelvin",round(T, 2))
	print("Temerature in Celsius",round(C,2))
	print("Temerature in Fahrenheit",round(F,2))


else: 
	print("Invalid inputs")