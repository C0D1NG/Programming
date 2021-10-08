students_marks = {}

def getinfo(n):
    for i in range(n):
        name, mark = input().split()
        students_marks[name] = int(mark)
        
def top3():
    keys = sorted(students_marks, key=students_marks.get)
    temp = []
    for k in keys:
        temp.append(k)
    return temp[-1], temp[-2], temp[-3]
    
def cashprize(std):
    prize = 5000
    for name in std:
        if prize < 0:
            return
        else:
            print(f'{name} - {prize}')
            prize = prize - 2000




n = int(input('number of students(atleast 5): '))
getinfo(n)
cashprize(top3())