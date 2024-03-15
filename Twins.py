n=int(input())
lst=list(map(int,input().split()))
lst.sort()
a=len(lst)-1
while True:
    if sum(lst[a:])>sum(lst[:a]):
        break
    else:
        a-=1
print(len(lst[a:]))
