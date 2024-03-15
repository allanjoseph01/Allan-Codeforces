n=int(input())
count=0
a,b=n//100,n%100
count+=a
if b>0:
    c,d=b//20,b%20
    count+=c
    if d>0:
        e,f=d//10,d%10
        count+=e
        if f>0:
            g,h=f//5,f%5
            count+=g
            if h>0:
                count+=h
print(count)
