'''
Bit Difference 
You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.
'''

class Solution:
    def countBitsFlip(self,a,b):
        c = bin(a^b)
        return c.count("1")
