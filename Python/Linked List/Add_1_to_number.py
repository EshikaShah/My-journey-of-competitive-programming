'''
Add 1 to a number represented as linked list 
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.
'''

def addOne(head):
    num = 0
    ptr = head
    while(ptr!=None):
        a = ptr.data
        num = num*10 + a
        ptr = ptr.next
    num += 1
    head1 = None
    while(num>0):
        a = Node(num%10)
        a.next = head1
        head1 = a
        num = num//10
    return head1
