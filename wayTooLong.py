n=int(input())
for i in range(0,n):
    st=input()
    if len(st)>10:
        print(st[0],end="")
        print(len(st)-2,end="")
        print(st[-1])
    else:
        print(st)
    
