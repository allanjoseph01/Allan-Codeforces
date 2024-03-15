st=input()
lst=list(st)
def dangerous(arr,x):
    count=0
    for j in range(1,len(arr)):
        if arr[j]==x:
            count+=1
            if count>=7:
                return True,count
        else:
            return False,count
    return False,count
i=0
countl=0
while i<len(lst):
    ans,f=dangerous(lst[i:],lst[i])
    if ans:
        print("YES")
        countl=0
        break
    else:
        i+=f
        countl+=1
if countl>0:
    print("NO")
