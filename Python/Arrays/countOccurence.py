'''
Count More than n/k Occurences 
Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.
'''
def countOccurence(arr,n,k):
    cut=n//k
    m = {}
    for i in range(0, n):
        if(arr[i] not in m.keys()):
            m[arr[i]]=0
        if(arr[i] in m.keys()):
            m[arr[i]] += 1
    count = 0
    for i in m.keys():
        if(m[i]>cut):
            count+=1
    return count
