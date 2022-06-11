import socket 

HEADER = 64
port = 5050
format = 'utf-8' 
disconnect_msg = 'DISCONNECT!' 
server = socket.gethostbyname(socket.gethostname()) 
addr = (server, port) 

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
client.connect(addr) 


def send(msg):
    message = msg.encode(format)
    msg_length = len(message)
    send_length = str(msg_length).encode(format) 
    send_length += b' ' * ( HEADER - len(send_length)) 
    client.send(send_length)
    client.send(message)

send("How are you?") 