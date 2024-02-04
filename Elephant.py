n=int(input())
count=0
if n%5==0:
    count=int(n/5)
    print(count)
else:
    count=n//5
    count+=1
    print(int(count))
