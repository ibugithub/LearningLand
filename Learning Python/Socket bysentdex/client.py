import socket 
import pickle
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
s.connect((socket.gethostname(), 1234)) 
format = 'utf-8'
headerSize = 10


full_msg = b''
new_msg = True
while True:
    msg = s.recv(16) 
    if new_msg:
        print(f"new message length: {msg[:headerSize]}")
        msgLen = int(msg[:headerSize]) 
        new_msg = False  

    full_msg += msg

    if len(full_msg) - headerSize == msgLen:
        print("full message recived ") 
        print(f"{full_msg[headerSize:]}") 
        d =  pickle.loads(full_msg[headerSize:])
        print(d)
        new_msg = True
        full_msg = b""  

    


   

