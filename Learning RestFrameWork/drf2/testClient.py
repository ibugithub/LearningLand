import requests
import json  
from datetime import datetime

current_datetime = datetime.now()
print(f" The current date is {current_datetime}")
dateTime = current_datetime.strftime("%Y-%m-%d,%H:%M")
print(f"The formatted date time is {dateTime}")
URL = "http://127.0.0.1:8000/createbook/"
data = {
    'title' : 'The C language',
    'author' : 'Md Ibrahim Hossain',
    'published_date' : dateTime
}

json_data = json.dumps(data)  
r = requests.post(url = URL, data = json_data) 

print(f"The r without .json(){r}")
print(f"The r is {r.json()}")



