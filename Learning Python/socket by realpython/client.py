import socket 

HOST = "192.168.42.30" 
PORT = 65432 

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST,PORT)) 
    s.sendall(b"Hello World !") 
    data = s.recv(1024)  

print(f"recevied {data}")