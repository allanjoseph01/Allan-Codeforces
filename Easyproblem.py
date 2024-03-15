n=int(input())
lst=list(map(int,input().split()))
if lst.count(1)>0:
    print("HARD")
else:
    print("EASY")
