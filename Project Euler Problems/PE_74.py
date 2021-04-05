def fact(a):
    k=1
    for i in range(1,a+1):
        k=k*i;
    return k


def factorial_digits(a):
    f=a
    s =0
    while(f>0):
        s=s+fact((f%10))
        f=f//10
    return s

def leng(a):
    check =1
    f = []
    l=0
    while(check ==1):
        if(factorial_digits(a) not in f):
            f.append(factorial_digits(a))
            a=factorial_digits(a)
            l=l+1
        else:
            return l+1


numbers = []
for i in range(0,1000001):
    numbers.append(0)
numbers[169]=2
numbers[871] = 1
numbers[872]=1
numbers[1] =1
numbers[2] = 2

s=0
for i in range(1000,1000000):
    if(leng(i)==60):
        s=s+1
        print(str(i)+' '+str(leng(i)))

print(s)
        


