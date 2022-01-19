'''
Move last element to front of a given Linked List

Write a function that moves the last element to the front in a given Singly Linked List. For example, if the given Linked List is 1->2->3->4->5, then the function should change the list to 5->1->2->3->4.
'''

def moveToFront(head):
    tmp = head
    sec_last = None
    
    if not tmp or not tmp.next:
        return

    while tmp and tmp.next :
        sec_last = tmp
        tmp = tmp.next

    sec_last.next = None
    tmp.next = head
    head = tmp
