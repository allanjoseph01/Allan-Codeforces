n=int(input())
L=[]
st=str(n)
for i in st:
    L.append(int(i))
a=L.count(4)
b=L.count(7)
if a+b==len(L):
    print("YES")
elif n%4==0 or n%7==0 or n%47==0 or n%74==0:
    print("YES")
else:
    print("NO")
