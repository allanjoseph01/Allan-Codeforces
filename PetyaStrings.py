str1=input()
str2=input()
count=0
for i in range(0,len(str1)):
    if str1[i].lower()==str2[i].lower():
        continue
    if str1[i].lower()<str2[i].lower():
        count-=1
        break
    else:
        count+=1
        break
if count==0:
    print("0")
elif count<0:
    print("-1")
else:
    print("1")
