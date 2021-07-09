'''
Subarray with 0 sum 
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
'''
def subArrayExists(arr,n):
      if( 0 in arr):
          return True
      s=0
      l=[]
      for i in range(n):
          s+=arr[i]
          if(s==0):
              return True
          l.append(s)
      if(len(set(l))==len(l)):
          return False
      else:
          return True
      return False
