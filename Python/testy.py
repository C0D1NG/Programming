import numpy as np
 
# sigmoid function 
def sig(x):
    return (1/(1+np.exp(-x)))
 
def deridig(y):
    return y*(1-y)
 
# input dataset
X = np.array([  [0,0,1],
                [0,1,1],
                [1,0,1],
                [1,1,1] ])
 
# output dataset
y = np.array([[0,0,1,1]]).T
 
#
np.random.seed(1)
 
# initialize weights randomly with mean 0
w0 = 2*np.random.random((3,1)) - 1
b0=1
lr=1
print ('w000',w0)
for iter in range(10000):
    # forward propagation
    l0 = X
    l1 = sig(np.dot(l0,w0)+b0)
    #print ('l1',l1)
    # how much did we miss?
    E_error=(y-l1)*(y-l1)
    # update weights
    w0 += 1*np.dot(l0.T,2*(y-l1) *deridig(l1))
    b0 += 1*2*(y-l1) *deridig(l1)
    #print ('w0',w0)
    
print ("Output After Training:")
print (l1)
print ("w0 After Training:")
print (w0)
print ("b0 After Training:")
