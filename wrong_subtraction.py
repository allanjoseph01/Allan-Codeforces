n,k=map(int,input().split())
while k>0:
    st=str(n)
    if int(st[-1])==0:
        n=int(n/10)
    else:
        n-=1
    k-=1
print(n)
