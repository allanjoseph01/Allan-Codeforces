st=input()
lst=list(st)
count=0
l=[]
for i in lst:
    if i!='{' and i!='}' and i!=',' and i!=' ' and i not in l:
        count+=1
        l.append(i)
print(count)
