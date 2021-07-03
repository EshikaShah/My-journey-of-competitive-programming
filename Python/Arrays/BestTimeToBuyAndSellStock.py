'''
Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
'''
class Solution:
    def maxProfit(self, nums: List[int]) -> int:
        mini = nums[0]
        profit = 0
        i=0
        while(i<len(nums)):
            if(nums[i]<mini):
                mini=nums[i]
            if(nums[i]-mini>profit):
                profit = nums[i]-mini
            i+=1
        return profit
