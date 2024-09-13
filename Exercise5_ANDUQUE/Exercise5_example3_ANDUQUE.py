class Node:
    def __init__(self,data):
        self.data = data # Assign data
        self.next = None # initialize 
        # next as null
        
        
class LinkedList:
# function to initialize the linked
# list object
    def __init__(self):
        self.head = None
        
    def printdata(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next
        
if __name__ == '__main__':
    Ilist = LinkedList()
    
    Ilist.head = Node(1)
    second = Node(2)
    third = Node(3)
    
    Ilist.head.next = second
    second.next = third
    
    Ilist.printdata()
    