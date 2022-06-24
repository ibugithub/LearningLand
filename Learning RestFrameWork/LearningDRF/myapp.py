import requests

URL  = "http://127.0.0.1:8000/booklist" 

r = requests.get(url = URL)
book = r.json()

print(book) 

fruit = "apple"
fruit2 = "apple" 

print(fruit == fruit2)