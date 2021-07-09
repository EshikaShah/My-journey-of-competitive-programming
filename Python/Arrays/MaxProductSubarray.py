'''
Maximum Product Subarray 
Given an array Arr that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.
'''

def maxProduct(self,a, size):
  maxProduct = a[0]
  prevMin = prevMax = 1
  for num in a:
      prevMin, prevMax = min(num, num*prevMin, num*prevMax), max(num, num*prevMin, num*prevMax)
      maxProduct = max(prevMax, maxProduct)
  return maxProduct
