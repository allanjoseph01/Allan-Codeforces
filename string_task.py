st=input()
st1=""
def isvowel(x):
    if x=='a' or x=='o' or x=='y' or x=='e' or x=='u' or x=='i' or x=='A' or x=='O' or x=='Y' or x=='E' or x=='U' or x=='I':
        return True
    else:
        return False
for i in range(0,len(st)):
    if not isvowel(st[i]):
        st1+=st[i]
if len(st1)==0:
    print("")
elif len(st1)==1:
    print(".",end="")
    print(st1[0].lower())
else:
    print(".",end="")
    for j in range(0,len(st1)-1):
        print(st1[j].lower(),end=".")
    print(st1[-1].lower())
