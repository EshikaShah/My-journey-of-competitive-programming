'''
Minimize the Heights II 
Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. 
After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
'''

def getMinDiff(arr, n, k):
        arr.sort()
        ans=arr[n-1]-arr[0]
        x=0
        while(arr[x]-k<0):
            x+=1
            if(x==n-1):
                break
        for i in range(x,n):
            mn=min(arr[0]+k,arr[i]-k)
            mx=max(arr[n-1]-k,arr[i-1]+k)
            ans=min(mx-mn,ans)
        return ans
print(getMinDiff([2, 6, 3, 4, 7, 2, 10, 3, 2, 1],10,5))
