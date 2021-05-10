def doUnion(a,b):
  return len(list(set(a+b)))

a=list(map(int,input().split()))
b=list(map(int,input().split()))
doUnion(a,b)
