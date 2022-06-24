# import requests
# import json  
# from datetime import datetime

# current_datetime = datetime.now()
# dateTime = current_datetime.strftime("%d/%m/%Y, %H:%M:%S")
# URL = "http://127.0.0.1:8000/createbook/"
# data = {
#     'title' : 'The C language',
#     'author' : 'Md Ibrahim Hossain',
#     'published_date' : dateTime
# }

# json_data = json.dumps(data)  
# r = requests.post(url = URL, data = json_data) 

# print(f"The r is {r}")


import parser 
print("Input expression for parser module ") 

expression = "2 + 2" 
