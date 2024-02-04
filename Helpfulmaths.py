st=input()
lst=st.split("+")
lst.sort()
if len(lst)==1:
    print(lst[0])
else:
    for i in range(0,len(lst)-1):
        print(lst[i],end="+")
    print(lst[-1])
