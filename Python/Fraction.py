import random
from fractions import Fraction
import json

questions = {
    "1": "3/4+4/5",
    "2" : "1/2+2/3",
    "3" : "4/5+5/6",
    "4" : "8/9+7/8",
    "5" : "8/9+7/8",
    "6" : "4/5+8/9",
    "7" : "1/2-2/3",
    "8" : "2/3-4/5",
    "9" : "3/4-3/4",
    "10" :  "4/5-5/6",
    "11" : "6/7-7/8",
    "12" : "1/2-8/9",
    "13" : "1/2*2/3",
    "14": "3/4*1/2",
    "15" : "5/6*2/3",
    "16" : "5/6*7/8",
    "17" :"6/7*3/4",
    "18" : "8/9*5/6",
    "19" : "2/3 / 4/5",
    "20": "1/2 / 2/3",
    "21": "2/3 / 3/4",
    "22" : "2/3 / 7/8", 
    "23" : "3/4 / 7/8",
    "24" : "1/2 / 3/4",
    "25" : "1/2 / 8/5"
}
answers = {
    "1": 3/4+4/5,
    "2" : 1/2+2/3,
    "3" : 4/5+5/6,
    "4" : 8/9+7/8,
    "5" : 8/9+7/8,
    "6" : 4/5+8/9,
    "7" : 1/2-2/3,
    "8" : 2/3-4/5,
    "9" : 3/4-3/4,
    "10" :  4/5-5/6,
    "11" : 6/7-7/8,
    "12" : 1/2-8/9,
    "13" : 1/2*2/3,
    "14": 3/4*1/2,
    "15" : 5/6*2/3,
    "16" : 5/6*7/8,
    "17" : 6/7*3/4,
    "18" : 8/9*5/6,
    "19" : 2/3 / 4/5,
    "20": 1/2 / 2/3,
    "21": 2/3 / 3/4,
    "22" : 2/3 / 7/8, 
    "23" : 3/4 / 7/8,
    "24" : 1/2 / 3/4,
    "25" : 1/2 / 8/5
}
with open('Questions.txt', 'w') as convert_file:
     convert_file.write(json.dumps(questions))

players=int(input("how many players are about to play: "))
for i in range(0,players):
    name= input("Please enter Your name: ")
    print(name, "welcome to the game!")
    entry_list = list(questions.items())
    random_quiz= random.choice(entry_list)
    print("Question is: \n", random_quiz[1])
    key = random_quiz[0]
    
    LT_points = 0
    lt_points = 0
    
    trial=1
    while True:
        num=int(input("Enter numerator value: "))
        denom=int(input("Enter denominator value: "))
        myAnswer=num/denom
        correct=str(Fraction(answers.get(key)))
        
        
        if trial==1 and myAnswer== answers.get(key):
            print("Correct.")
            LT_points= LT_points+4
            lt_points = lt_points +3
            break
            
            
        elif trial==2 and myAnswer== answers.get(key):
            print("Correct.")
            LT_points= LT_points+2
            lt_points = lt_points +1
            break
            
        
        elif trial==2 and myAnswer != answers.get(key):
            print("InCorrect.")
            LT_points= LT_points+0
            lt_points = lt_points +0
            print("Correct answer is ",answers.get(key))
            
        trial=trial+1
        if trial >2:
            break

    with open("Score.txt", "a+") as file_object:
        # Move read cursor to the start of file.
        file_object.seek(0)
        # If file is not empty then append '\n'
        data = file_object.read(100)
        if len(data) > 0 :
            file_object.write("\n")
        # Append text at the end of file
        file_object.write("%s:%s %s = %s \n %s = %s" %("Scores of",name,"Lowest Terms points",LT_points, "lowest term points",lt_points))
            