''' Find the Duplicate Number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
'''
def findDuplicate(nums):
    nums1=list(set(nums))
    a=len(nums)-len(nums1)
    b=sum(nums)-sum(nums1)
    return(b//a)
print(findDuplicate([1,3,4,2,2]))
