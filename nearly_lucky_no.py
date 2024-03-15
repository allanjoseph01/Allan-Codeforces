n=int(input())
st=str(n)
l=list(st)
count4=l.count('4')
count7=l.count('7')
count=count4+count7
if count==4 or count==7:
    print("YES")
else:
    print("NO")
