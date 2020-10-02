#Code to find the 2nd largest number in a list
#created by mathew varghese(mathewvarghesemanu in github)

l=int(input("Enter length of the list: "))  #input the length of list
print("Enter integer elements in the list")  #input the elements in the list

# Taking user input and assigning to a list_elements list
list_elements=[]
for i in range(0,l):
    user_input=int(input())
    list_elements.append(user_input)

# Finding largest and second largest element by going through a loop
largest=list_elements[i]
second_largest=0
for i in list_elements:
    if i>largest:
        second_largest=largest
        largest=i
print("second largest number is " ,second_largest)
    