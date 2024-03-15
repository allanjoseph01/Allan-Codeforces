n ,m ,a=map(int,input().split())
countl=n//a
countb=m//a
if n%a>0:
    countl+=1
if m%a>0:
    countb+=1
print(countl*countb)
