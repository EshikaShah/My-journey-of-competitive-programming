'''
Merge Intervals
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
'''

l=[[1,4],[0,4]]
def merge(intervals):
    i=0
    intervals.sort(key = lambda x: x[0])
    while(i<len(intervals)-1):
        a=intervals[i]
        b=intervals[i+1]
        if(a[1]>=b[0]):
            c=[a[0],max(a[1],b[1])]
            intervals.remove(a)
            intervals.remove(b)
            intervals.insert(i,c)
        else:
            i+=1
    return intervals
print(merge(l))
