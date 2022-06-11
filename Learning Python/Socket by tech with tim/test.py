from ast import keyword
from itertools import count

# fileHandler = open('plant.txt')
# count = 0

# for line in fileHandler:
#     count += 1
#     print(line)

# print("The total line of this file is ", count)


# fileHandler = open('planet.txt')
# file = fileHandler.read()
# print(file) 
# print("The length of the file is ", len(file))
# print(file[:30])





# fileName = input("Please enter your file name ")
# keyword = input("Please enter the keyword you want to search ")
# keyword =str(keyword)
# try: 
#     fileHandler = open(fileName)
# except:
#     print("File doesn't found ") 
#     exit()
# count = 0
# for line in fileHandler:
#     line = line.rstrip()
#     if line.startswith(keyword):
#         count +=1
#         print(count)

# print("so this file has" , count , "number of line starting with the keyword " + keyword)



# filename = input("please enter your filename you want to open ")
# fileHandle = open(filename)
# file = fileHandle.read().split()
# wordDict = {}
# for word in file:
#     wordDict[word] = wordDict.get(word, 0) +1 

# bigWord = None
# bigCount = 0

# for word, count in wordDict.items():
#     if count > bigCount:
#         bigWord = word
#         bigCount = count

# print("So This is the Most Frequent Word is", bigWord)
# print("It's frequency is ", bigCount)
# print(wordDict.get(bigWord)) 












    


# numbers = '3,6,7,9'
# for number in numbers:
#     print(number)

# intNumbers = map(int, numbers.split(','))

# listNumbers = list(intNumbers)
# tupleNumbers = tuple(intNumbers)

# print("This is the numbers ", numbers) 
# print("The type of numbes is ", type(numbers))

# print("This is the newNumbers ", listNumbers)
# print("The type of intNumbers is ", type(listNumbers))
    







# odd = [1, 3, 5, 7, 9]
# def evenMaker(list):
#     return list + 1
# even = list(map(evenMaker, odd))
# print(even)








# # For finding the largest number user typed
# numbers = input('write the numbers \n')
# numbers = tuple(map(int,numbers.split(',')))
# large = None
# for number in numbers:
#     if large == None or number > large:
#         large = number 

# print("So the largest number you've tpye is \n ", large)















# Here I'm trying to perform some string operations
demoText = "Astronomer Dr. Ellie Arroway has long been interested in contact to faraway lands, a love fostered in her childhood by her father, Ted Arroway (David Morse), who died when she was nine-years-old, leaving her orphaned. Her current work in monitoring for extraterrestrial life is based on that love and is in part an homage to her father. Ever since funding from the National Science Foundation (N.S.F.) was pulled on her work, which is referred to some, including her N.S.F. superior David Drumlin (Tom Skerritt), as more science fiction than science, Ellie, with a few of her rogue scientist colleagues, have looked for funding from where ever they could get it to continue their work. When Ellie and her colleagues hear chatter originating from the vicinity of the star Vega, Ellie feels vindicated. But that vindication is short lived when others, including politicians, the military, religious leaders, and other scientists, such as Drumlin, try to take over her work. When the messages received from space are decoded, the project takes on a whole new dimension, which strengthens for Ellie the quest for the truth. Thrown into the mix are the unknown person who has up until now funded most of Ellie's work and what his motivations are, and Palmer Joss (Matthew McConaughey), a renowned author and theologian, who despite their fundamental differences in outlook, is mutually attracted to Ellie, that attraction based in part on intellect and their common goal of wanting to know the truth.—Huggo"

# theOne = demoText.find("N.S.F") 
# print(theOne) 

# to = demoText.find(" ", theOne)
# print(demoText[theOne : to])









import socket 
mysock = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
mysock.connect(('data.pr4e.org', 80)) 
cmd = 'GET http://data.pr4e.org/romeo.txt HTTP/1.0\n\n'.encode() 
mysock.send(cmd) 

while True:
    data = mysock.recv(512)
    if (len(data)< 1):
        break
    print(data.decode()) 

mysock.close()