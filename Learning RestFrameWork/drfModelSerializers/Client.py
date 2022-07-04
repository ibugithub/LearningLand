import requests 
import json 


URL = "http://127.0.0.1:8000/studentapi/"
 

def get_data(id = None):
    print(f"The id is {id}")
    data = {"id" : id} 
    jsonData = json.dumps(data) 
    r = requests.get(url = URL, data = jsonData) 
    data = r.json() 
    print(f"The Response data is {data}") 


def create_data(name, roll, city):
    data = { 
        "name" : name,
        "roll" : roll,
        "city" : city
    }
    jsonData = json.dumps(data) 
    r = requests.post(url = URL, data = jsonData) 
    response = r.json() 
    print(f"The response is {response}")
    
def update_data(oldName, newName, city):

    # # I've just done little bit of exprimenting here don't use Nusrat name more than one time coz i'v used this name here as a primary key 'I should have use the id as the primary key'
    updated_data = {
        "oldName" : oldName,
        "newData": {
            "name" : newName,
            "city" : city
        }
    } 
    json_update_data = json.dumps(updated_data) 
    r = requests.put(url = URL, data = json_update_data) 
    update_data_response = r.json()
    print(f"Response: {update_data_response}")

 
def delete_data(name):
    data = {
        "name": name
    }
    json_name = json.dumps(data)
    r = requests.delete(url = URL, data = json_name)
    response = r.json()
    print(f"Response: {response}")

# # ..... This method is for showing the data ........
# get_data()

# # ....... This section is for creating data .......
# # # Plz don't use the same name in the database because i'm referenceing name as key here
create_name = "Nusrat" 
create_roll = 152
create_city = "HateLands"
create_data(create_name,create_roll, create_city)

# # # ......This section is for updating the data.......
# oldName = "Rakib"
# newName = "Sakib"
# city = "finland"
# update_data(oldName, newName, city)


# # # ...... This section is for deleting the data ........
# delete_data('Maya')

