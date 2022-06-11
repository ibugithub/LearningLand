from email.header import Header
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
    print("The len is ", len(msg))
    message = msg.encode(format)
    msg_length = len(message)


    print("The msg length is ", msg_length)
    send_length = str(msg_length).encode(format) 
    print("The len of send_length is ",  len(send_length))
    send_length += b' ' * ( HEADER - len(send_length)) 
    print("The send_length is ", send_length)
    print("The type of it is ", type(send_length))

    # send_length = str(24).encode()
    # print("The send_length is ", send_length)
    # print("The type of it is ", type(send_length))


    client.send(send_length)
    client.send(message)

send("Hellow world, what's up?") 


myMsg = "I'm suffering from the python socket.."
print(f"{len(myMsg): < 20}")