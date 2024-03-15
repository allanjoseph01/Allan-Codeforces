n=int(input())
st=input()
lst=list(st)
countA=0
countD=0
for i in range(0,n):
    if lst[i]=='A':
        countA+=1
    else:
        countD+=1
if countA>countD:
    print("Anton")
elif countD>countA:
    print("Danik")
else:
    print("Friendship")
