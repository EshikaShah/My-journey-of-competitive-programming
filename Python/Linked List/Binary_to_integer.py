'''
Convert Binary Number in a Linked List to Integer

Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.
'''

def getDecimalValue(head: ListNode) -> int:
    num = 0
    ptr = head
    while(ptr!=None):
        a = ptr.val
        num = num*10 + a
        ptr = ptr.next
    num = str(num)
    return int(num,2)
