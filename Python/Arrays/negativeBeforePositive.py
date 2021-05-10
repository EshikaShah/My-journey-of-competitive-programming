'''
Move all negative numbers to beginning and positive to end with constant extra space
'''


def negBeforePositive(n):
    x=0
    for i in range(len(n)):
        if(n[i]<0):
            temp=n[x]
            n[x]=n[i]
            n[i]=temp
            x+=1
    return n
n=list(map(int,input().split()))
n=negBeforePositive(n)
for i in n:
    print(i," ",end='')
