def collatz(a):
    s=0
    if(a==1):
        return 1
    while(4):
        if(a%2==0):
            a=a/2
        else:
            a=3*a+1
        s=s+1
        if(a==1):
            return s+1
x=999999
m=0
counter =0
while(x>=500000):
    if(collatz(x)>m):
        m =collatz(x)
        counter = x
    x=x-1
print(m,counter)