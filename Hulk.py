n=int(input())
for i in range(1,n+1):
    if i%2==0:
        print("I love",end=" ")
        if n>i:
            print("that",end=" ")
    else:
        print("I hate",end=" ")
        if n>i:
            print("that",end=" ")
print("it")
