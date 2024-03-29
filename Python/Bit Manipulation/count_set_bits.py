'''
Number of 1 Bits

Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight)
'''

class Solution:
    def hammingWeight(self, n: int) -> int:
        c = 0
        while n>0:
            if(n%2==1):
                c+=1
            n=n//2
        return c
