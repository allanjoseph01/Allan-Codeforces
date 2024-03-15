lst1=list(map(int,input().split()))
lst2=[]
for i in lst1:
    if i not in lst2:
        lst2.append(i)
print(len(lst1)-len(lst2))
