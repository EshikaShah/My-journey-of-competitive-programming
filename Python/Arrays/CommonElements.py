'''
Common elements 
Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
'''
def commonElements (self,A, B, C, n1, n2, n3):
      A=set(A).intersection(set(B))
      A=list(set(A).intersection(set(C)))
      A.sort()
      return A
