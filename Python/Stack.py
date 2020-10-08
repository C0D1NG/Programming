# Implementation of Stack Data Structure
class Stack:
    __stack=[1,2,3,4,5,6]

    def new(self):
        self.__stack=[]
        return []

    def push(self,number):
        return self.__stack.insert(len(self.__stack),number)

    def remove(self):   #removes the last added element(similar to pop)
        w=self.__stack[len(self.__stack)-1]
        print(w)        #prints the last removed element
        return self.__stack.remove(w)

    def empty(self):
        if self.__stack == []:
            return 'IsEmpty'
        else:
            return 'NotEmpty'

    def size(self):
        return len(self.__stack)

    def top(self):
        if len(self.__stack)>0:
            return self.__stack[len(self.__stack)-1]
        else:
            return "List is Empty"

lst=Stack()
print(lst.new())
print(lst.top())
lst.push(150)
lst.push(140)
lst.push(160)
lst.push(170)
lst.remove()
print(lst.empty())
print(lst.size())
print(lst.top())