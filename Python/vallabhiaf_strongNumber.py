
import math
def strong_num():
                return [x for x in range(1, 1000) if x == sum(math.factorial(int(q)) for q in str(x))]
                            
print (strong_num())
