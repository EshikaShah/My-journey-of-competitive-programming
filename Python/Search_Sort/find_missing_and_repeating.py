'''
Find Missing And Repeating 

Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.
'''

def findTwoElement(arr, n): 
    x = sum(list(set(arr)))
    B = sum(arr) - x
    A = n*(n+1)//2 - x
    return B, A
