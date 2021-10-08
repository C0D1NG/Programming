sentence = input()
N = int(input())
words = sentence.split()
output_list = []
      
for item in range(len(words) - N, len(words)):
    output_list.append(words[item])
      
new=" "   
for item in range(0, len(words) - N): 
    output_list.append(words[item])

print(new.join(output_list))
