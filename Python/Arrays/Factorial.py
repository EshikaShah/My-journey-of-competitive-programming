def factorial(self, N):
      fact=1
      for i in range(1,N+1):
          fact*=i
      l=[]
      while(fact>0):
          l.append(fact%10)
          fact=fact//10
      l.reverse()
      return l
