#Implemeneted Priority Queue
class PriorityQueue:
    Queue = []
    def insert(self, element, p):
        self.Queue.append((element, p))
        self.Queue.sort(key=lambda x: x[1])
        print("The element "+str(element) + " (having priority as: " + str(p) + " )" +" is added to Queue" )

    def RemoveHighest(self):
        print("The element "+str(self.Queue[-1][0]) + " having highest priority is removed.")
        del self.Queue[-1]

    def HighestPriorityItem(self):
        return "The element with highest priority is:",self.Queue[-1][0]

    def isempty(self):
        if (self.Queue == []):
            return 'Empty'
        else:
            return 'Not Empty'


ele = PriorityQueue()
print(ele.isempty())
ele.insert(10,1)
ele.insert(12,2)
ele.insert(14,17)
ele.insert(9,8)
print(ele.HighestPriorityItem())
ele.RemoveHighest()
print(ele.HighestPriorityItem())