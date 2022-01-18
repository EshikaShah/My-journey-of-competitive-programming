'''
Searching in an array where adjacent differ by at most k 

A step array is an array of integer where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x if multiple elements exist, return the first occurrence of the key.
'''

def search (arr, n, x, k) : 
    i = 0
    while(i<n):
        if(arr[i]==x):
            return i
        i += max(1, abs(x-arr[i])//k)
    return -1
