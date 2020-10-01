from pyfiglet import figlet_format
from termcolor import colored
import requests
from random import choice

print(colored(figlet_format("DAD JOKE 3000!"),color="magenta"))
search=input("Let me tell you a joke! Give me a topic: ")
url="https://www.icanhazdadjoke.com/search"
response = requests.get(
	url,
	headers={"Accept":"application/json"},
	params={"term":search}
	)

data =response.json()
res=data['results']
num=data['total_jokes']
if num>1:
	print(f"I've got {num} jokes about {search}. Here's one:")
	print(choice(res)['joke'])

if num==1:
	print(f"I've got one joke about {search}. Here's one:")
	print(res[0]['joke'])

if num==0:
	print(f"Sorry, couldn't find a joke on {search}")