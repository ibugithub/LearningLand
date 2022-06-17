# import socket
# client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# client_socket.connect(('dr-chuck.com', 80))
# cmd = 'GET http://www.dr-chuck.com/page1.html HTTP/1.0\n\n'.encode("utf-8")
# client_socket.send(cmd)

# while True:
#     data = client_socket.recv(1024)
#     if len(data) < 1 :
#         break
#     print(data.decode('utf-8'))
# client_socket.close()

# import urllib.request, urllib.parse, urllib.error

# fhandle = urllib.request.urlopen('http://www.dr-chuck.com/page1.html')

# for line in fhandle:
#     print(line.decode().strip())

# #..... XML ---1 ....
# import xml.etree.ElementTree as ET

# data = '''
#             <person>
#                 <name> Ibrahim </name>
#                 <phone type="banglalink">
#                     +8801904172974
#                 </phone>
#                 <email hide="yes" />
#             </person>

#         '''

# tree = ET.fromstring(data)
# print(tree)

# print("Name : ", tree.find('name').text)

# print("Attr : ", tree.find('email').get('hide'))

# # XML -2 ......
# import xml.etree.ElementTree as ET

# input = '''
#         <stuff>

#             <users>

#                 <user x="2">
#                     <id> 1749 </id>
#                     <name wife="maya"> ibrahim </name>
#                 </user>
#                     <user x = "7">
#                     <id> 1748 </id>
#                     <name> Rakib </name>
#                 </user>

#             </users>

#         </stuff>

# '''

# stuff = ET.fromstring(input)
# list = stuff.findall("users/user")
# print("Number of users : ", len(list))

# for item in list:

#     print("Id : ", item.find('id').text)
#     name = item.find('name').text
#     print("Name : ", name)
#     print("Attribute : ", item.get('x'))
#     if name.strip() == 'ibrahim':
#         print(f"The wife of {name} is", item.find('name').get('wife'))

# wname = stuff.find('users/user/')

# print("----------------")

# print(type(wname))
# # ---------------------------
# -----------------------------
# # ......Json.....
import json

data = ''' 
 {
   "name" : "ibrahim",
   "phone" : {
    "number" : "01940293770",
    "type" : "banglalink"
   },
   "emails" : {
    "hide" : "yes"
   }

 }
'''
info = json.loads(data)
print(info['phone']['number'])