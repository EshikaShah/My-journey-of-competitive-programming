# Given an array, rotate the array by one position in clock-wise direction.

def rotate( arr):
    arr.insert(0,arr[-1])
    arr.pop()
