#importing modules

import requests
import time
from bs4 import BeautifulSoup

#requesting the server
url = "https://www.worldometers.info/coronavirus/"
req = requests.get(url)

#function to extract the required data
def coronameter():
    soup = BeautifulSoup(req.text, "html.parser")
    confirmed = soup.select('div.maincounter-number span')[0]
    recovered = soup.select('div.maincounter-number span')[1]
    deaths = soup.select('div.maincounter-number span')[2]

    print("Confirmed cases " +confirmed.getText())
    print("Patients recovered "+ recovered.getText())
    print("Total deaths "+ deaths.getText())

while True:
    print("=====================================")
    print("Corona Update(World) ")
    print("=====================================")	
    coronameter()
    time.sleep(12)