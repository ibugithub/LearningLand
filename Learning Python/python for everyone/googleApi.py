import urllib.request, urllib.parse, urllib.error 
import json 


serviceUrl = "http://maps.gooleapis.com/maps/api/geocode/json?" 

while True: 
    address = input("Enter location : ") 
    if len(address) < 1 :
        break 
    url = serviceUrl + urllib.parse.urlencode({"address" : address}) 
    print("Retriving", url)  
    uh = urllib.request.urlopen(url) 
    data = uh.read().decode()
    print(data)
    print('Retrived', len(data), "characters") 
    js = json.loads(data)
    try: 
        js = json.loads(data)
    except:
        js = None 
    print(js)

    # if not js or 'status' not in js or js['status'] != 'OK': 
    #     print("=========== failur to retrive ==============")
    #     print(data) 
    #     continue 
  