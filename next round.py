a,b=map(int,input().split())
lst=list(map(int,input().split()))
n=lst[b-1]
count=0
for i in lst:
    if i>=n and i!=0:
        count+=1
print(count)
