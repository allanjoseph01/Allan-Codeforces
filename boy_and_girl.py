st=input()
lst=list(st)
l=[]
for i in lst:
    if i not in l:
        l.append(i)
if len(l)%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
