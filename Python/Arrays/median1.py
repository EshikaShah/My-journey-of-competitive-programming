'''
4. Median of Two Sorted Arrays

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).
'''

def findMedianSortedArrays(nums1, nums2):
    l=nums1+nums2
    l.sort()
    n=len(l)
    if(n%2==0):
        x=(l[n//2]+l[(n//2)-1])/2
        return x
    else:
        return l[n//2]
