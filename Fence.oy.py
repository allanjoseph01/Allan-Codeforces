n,h=map(int,input().split())
lst=list(map(int,input().split()))
count=0
for i in lst:
    if i>h:
        count+=2
    else:
        count+=1
print(count)
