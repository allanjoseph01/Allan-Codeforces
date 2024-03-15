n=int(input())
lst1=list(map(int,input().split()))
lst2=list(map(int,input().split()))
lst3=[]
lst4=[]
for i in range(1,n+1):
    lst3.append(i)
for j in range(1,len(lst1)):
    if lst1[j] not in lst4 and lst1[j]!=0:
        lst4.append(lst1[j])
for k in range(1,len(lst2)):
    if lst2[k] not in lst4 and lst2[k]!=0:
        lst4.append(lst2[k])
lst4.sort()
if lst3==lst4:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
