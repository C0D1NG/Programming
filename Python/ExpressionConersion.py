OPERATORS = set(['+', '-', '*', '/', '(', ')', '^'])  # set of operators

PRIORITY = {'+':1, '-':1, '*':2, '/':2, '^':3} # dictionary having priorities 

 
expression1 = "a^b/c+d-(e/t-g+(h+i-j)^k+l-m/n)"
# def infix_to_postfix(expression): #input expression

stack = [] # initially stack empty
output = '' # initially output empty

    

for ch in expression1:

    if ch not in OPERATORS:  # if an operand then put it directly in postfix expression

        output+= ch

    elif ch=='(':  # else operators should be put in stack

        stack.append('(')

    elif ch==')':

        while stack and stack[-1]!= '(':

            output+=stack.pop()

        stack.pop()

    else:

            # lesser priority can't be on top on higher or equal priority    

             # so pop and put in output   

        while stack and stack[-1]!='(' and PRIORITY[ch]<=PRIORITY[stack[-1]]:

            output+=stack.pop()

        stack.append(ch)

while stack:

    output+=stack.pop()


 
print('infix expression: ',expression1)

print('postfix expression: ',output)

#Converting postfix to prefix

# def postToPre(post_exp):
     
stck2 = []
 
    # length of expression
length = len(output)
 
    # reading from right to left
for i in range(length):
 
    # check if symbol is operator
        if (isOperator(post_exp[i])):
        if output[i] in OPERATORS:
 
            # pop two operands from stack
            op1 = s[-1]
            s.pop()
            op2 = s[-1]
            s.pop()
 
            # concat the operands and operator
            temp = post_exp[i] + op2 + op1
 
            # Push string temp back to stack
            s.append(temp)
 
        # if symbol is an operand
        else:
 
            # push the operand to the stack
            s.append(post_exp[i])
 
    
    ans = ""
    for i in s:
        ans += i
    return ans
 

