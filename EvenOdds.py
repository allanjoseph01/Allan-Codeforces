n,k=map(int,input().split())
l1=[]
l2=[]
for i in range(1,n+1):
    if i%2==0:
        l2.append(i)
    else:
        l1.append(i)
l1.extend(l2)
k-=1
print(l1[k])
