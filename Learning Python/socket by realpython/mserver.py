import sys 
import socket 
import selectors 
import types 


sel = selectors.DefaultSelector() 
host, port = sys.argv[1], int(sys.argv[2]) 

Islock = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
Islock.bind(host, port) 
Islock.listen() 
print(f"Listening on {(host, port)}") 
Islock.setblocking(False) 
sel.register(Islock, selectors.EVENT_READ, data = None) 


def accept_wraper(sock):
    conn, addr = sock.accept()
    print(f"Accepted connection from {addr}") 
    conn.setblocking(False) 
    data = types.SimpleNamespace(addr = addr, inb = b"",outb = b"")
    events = selectors.EVENT_READ | selectors.EVENT_WRITE  
    sel.register(conn, events, data = data)


def service_connection(key, mask):
    sock = key.fileobj
    data = key.data 
    if mask & selectors.EVENT_READ:
        recv_data = sock.recv(1024) 
        if recv_data :
            data.outb += recv_data 
        else:
            print(f"closing the connection to {data.addr}") 
            sel.unregister(sock) 
            sock.close() 

    if mask & selectors.EVENT_WRITE: 
        if data.outb:
            print(f"Echoing {data.outb} to {data.addr}") 
            sent = sock.send(data.outb) 
            data.outb = data[sent:]



try: 
    while True:
        events = sel.select(timeout = None) 
        for key, mask in events:
            if key.data is None:
                accept_wraper(key.fileobj)
            else:
                service_connection(key, mask)
except KeyboardInterrupt:
    print("Caught keyoard interupt, exisiting") 
finally:
    sel.close() 


