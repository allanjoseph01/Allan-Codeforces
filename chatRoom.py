st=input()
def countletter(str1,a):
    return str1.count(a)
i=0
str2=""
while i<len(st):
    ans=countletter(st[i:],st[i])
    if st[i]=='h' or st[i]=='e' or st[i]=='o':
        if st[i] not in str2:
            str2+=st[i]
    elif st[i]=='l':
        str2+=st[i]
    if st[i]=='l' and ans>1:
        i+=(ans-1)
    else:
        i+=ans
if str2=="hello":
    print("YES")
else:
    print("NO")
