n=list(map(int,input().split()))
start=0
end=len(n)-1
for i in range(len(n)//2):
    temp=n[start]
    n[start]=n[end]
    n[end]=temp
    start+=1
    end-=1
print(n)
