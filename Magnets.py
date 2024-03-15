n=int(input())
l=[]
b=int(input())
l.append(b)
o=0
count=1
for i in range(n-1):
    a=int(input())
    l.append(a)
    o+=1
    if l[o]!=l[o-1]:
        count+=1
print(l)
print(count)
