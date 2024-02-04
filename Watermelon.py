n=int(input())
count=0
for i  in range(1,n):
    for j in range(1,n):
        if i+j==n and i%2==0 and j%2==0:
            count+=1
if count>0:
    print("YES")
else:
    print("NO")
