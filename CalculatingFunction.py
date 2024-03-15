n=int(input())
def func(n):
    if n%2==0:
        return n//2
    else:
        return -(n+1)//2
print(func(n))
