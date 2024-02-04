n=int(input())
count=0
for i in range(0,n):
    a,b,c=map(int,input().split())
    count1=0
    if a==1:
        count1+=1
    if b==1:
        count1+=1
    if c==1:
        count1+=1
    if count1>=2:
        count+=1
print(count)
