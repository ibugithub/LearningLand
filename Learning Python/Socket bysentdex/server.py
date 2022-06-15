# ....Lerning Socket Programing in python by bysentdex part 1 & part 2 .... 

# import socket 
# import time

# s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)   
# s.bind((socket.gethostname(), 1234)) 
# s.listen(5)  
# format = 'utf-8'
# headerSize = 10
# while True:
#     print("The server is started....")
#     clientsocket, address = s.accept()
#     print(f"connection from {address} has been established ") 
#     msg = "Welcome to the server"
#     msg = (f"{len(msg): <{headerSize}}" + msg)
#     clientsocket.send(bytes(msg, format))
    
#     while True:
#         time.sleep(3) 
#         msg = f"The time is {time.time()}"
#         msg = f"{len(msg): <{headerSize}}" + msg
#         clientsocket.send(bytes(msg, format))


import socket 
import pickle 


HEADER = 10
FORMAT = "utf-8" 

serverSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
HOST =  "192.168.42.30"
PORT  = 1234 
serverAddr = (HOST , PORT) 
serverSocket.bind(serverAddr) 
serverSocket.listen() 

while True:
    communication_socket, addr = serverSocket.accept() 
    print(f"connection stablished from {addr}")
    msg  = {'mango': 200 , "orange": 300, 'apple': 180}  
    msg = pickle.dumps(msg) 
    
    finalMsg = bytes( f"{len(msg): <{HEADER}}", 'utf-8') + msg
    communication_socket.send(finalMsg) 
     



