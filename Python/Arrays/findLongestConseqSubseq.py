'''
Longest consecutive subsequence 
Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
'''

def findLongestConseqSubseq(arr, N):
    arr = list(set(arr))
    arr.sort()
    count = 1
    l=[1]
    for i in range(1,len(arr)):
        if(arr[i]==arr[i-1]+1):
            count+=1
            l.append(count)
        else:
            count=1
    return max(l)
