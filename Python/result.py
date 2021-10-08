students = int(input('Enter number of students: '))
marks = []
for i in range (students):
    mark = int(input('Enter mark: '))
    if mark >= 0 and mark <=100:
        marks.append(mark)
    else: 
        print('Invalid marks.')
count = 0
for item in marks:
    if item > 70:
        print(item, end=', ')
        count=count+1
    else:
        pass
print("\n The total number of students who scored more than 70 is ", count)