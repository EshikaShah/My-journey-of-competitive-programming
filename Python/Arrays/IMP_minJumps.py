'''
Minimum number of jumps 
Given an array of integers where each element represents the max number of steps that can be made forward from that element. 
Find the minimum number of jumps to reach the end of the array (starting from the first element). 
If an element is 0, then you cannot move through that element.
'''

def minJumps(arr, n):
    pos=dist=jump=0
    for i in range(len(arr)-1):
        dist=max(dist,i+arr[i])
        if pos==i:
            jump+=1
            pos=dist
    return jump
print(minJumps([1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 ],11))
