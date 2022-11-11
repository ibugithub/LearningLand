import csv 

# fileName = "people.csv" 
# fieldName = ["Date", "Used Gb"] 

fileName = "people.csv" 
fieldName = [" Name ", " Age ", " City ", " Hobby ", ]  


with open(fileName, 'w') as peoplefile: 
    csvWriter = csv.writer(peoplefile)
    csvWriter.writerow(fieldName) 
    name = input("write your name here \n") 
    age = int(input("write your age here \n"))
    city = input("write your city here \n") 
    hobby = input("write your hobby here \n") 
    row = [[name, age, city, hobby],]
    csvWriter.writerows(row)
    