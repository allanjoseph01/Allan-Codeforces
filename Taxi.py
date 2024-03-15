n=int(input())
lst=list(map(int,input().split()))
count=lst.count(4)
a=lst.count(1)
b=lst.count(2)
c=lst.count(3)
if a==c or c>a:
    if b==1:
        count=count+c+b
    else:
        count=count+c+(b//2)
elif a==b or c<a and c>0:
    count=count+b+c
else:
    if a%4==0:
        count+=a//4
    else:
        count+=(a//4+1)
print(count)
