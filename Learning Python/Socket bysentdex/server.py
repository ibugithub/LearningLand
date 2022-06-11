import socket 

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)   
s.bind((socket.gethostname(), 1234)) 
s.listen(5)  
format = 'utf-8'

while True:
    print("The server is started....")
    clientsocket, address = s.accept()
    print(f"connection from {address} has been established ") 
    clientsocket.send(bytes("welcome to the server", format))
    clientsocket.close()