import socket 
import threading
import time  

HEADER = 64
port = 5050
format = "utf-8"
ipAddress = socket.gethostbyname(socket.gethostname())
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
disconnect_msg = "DISCONNECT!"

addr = (ipAddress, port) 
server.bind(addr) 


def handleClient(conn, addr):
    print(f"[New Connection] {addr} connected ") 
    connected = True
    while connected:
        msg_length = conn.recv(HEADER).decode(format)
        print("\n -------------------------- \n")
        print("The msg length is", msg_length)
        print("\n --------------------")
        if msg_length:
            msg_length = int(msg_length)
            msg = conn.recv(msg_length).decode(format) 
            if disconnect_msg:
                connected = False
            print(f"[{addr}] {msg} ") 

    conn.close()
    




def start():
    server.listen()
    print(f"[LISTENING] Server is listening on {ipAddress}:{port}")
    while True:
        conn, addr = server.accept() 
        thread = threading.Thread(target=handleClient, args = (conn, addr))
        thread.start()
        print(f"[Active Connections] {threading.activeCount() - 1}")

print("The server is starting.... ")
start()
