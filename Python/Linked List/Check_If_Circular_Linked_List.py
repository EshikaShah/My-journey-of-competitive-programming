'''
Check If Circular Linked List
Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.
'''
def isCircular(head):
  slow = fast = head
  while(fast and fast.next):
      slow = slow.next
      fast = fast.next.next
      if(slow==fast):
          return True
  return False
