x1 = int(input('Enter X1: '))
x2 =  int(input('Enter X2: '))
w1 = 0.2
w2 = 0.3
lr = 0.5
 
 #calculate weighted sum
weighted_sum  =(w1 * x1)+ (w2 * x2) + lr

# make prediction
print('Weighted sum is :', weighted_sum)
Y = 1 if weighted_sum  >= 0.5 else 0
print ('Output is:', Y )

