class Node:
    def __init__(self, data, next = None): 
        self.data = data 
        self.next = next 

class LinkList:
    def __init__(self):
        self.head = None
        self.last = None
    
    def insert_at_begening(self, data):
        node = Node(data, self.head) 
        self.head = node  
        if self.last is None:
            self.last = self.head
    
    def insert_at_end(self, data):
        if self.last is None:
            self.head = Node(data, None) 
            self.last = self.head
            
        else:
            node = Node(data, None)
            self.last.next = node 
            self.last = node 

    def print(self):
        if self.head is None:
            print("linked list is empty") 
        
        data = self.head
        linklist = " " 

        while data: 
            linklist += str(data.data) + "--> "
            data = data.next 
        print(linklist)


linklist = LinkList()
linklist.print() 


linklist.insert_at_begening(5) 
linklist.insert_at_begening(6)
linklist.insert_at_end(8)
linklist.insert_at_end(9)
linklist.insert_at_begening(2)
linklist.insert_at_begening(1)
linklist.insert_at_end(10)

linklist.print()
    

