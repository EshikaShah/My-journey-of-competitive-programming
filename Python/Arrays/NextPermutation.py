'''
Next Permutation

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.
'''

class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        i=j=len(nums)-1
        while i>0 and nums[i-1]>=nums[i]:
            i-=1
            
        if(i==0):
            nums.reverse()
            return
        
        while nums[j]<=nums[i-1]:
            j-=1
        
        nums[j], nums[i-1] = nums[i-1], nums[j]
        nums[i:]=nums[len(nums)-1:i-1:-1]
