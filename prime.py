for j in range(2,20):
    count=0
    for i in range(2,j):
        if j%i==0:
            count+=1
    if count==0:
        print(j)
