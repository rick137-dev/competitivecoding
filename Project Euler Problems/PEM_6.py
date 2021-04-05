import math
def digit(a):
    d =0
    while(a>0):
        d=d+1
        a=a//10
    return d
def reverse(a):
    x =a
    p =digit(a)
    rev=0
    while(x>0):
        rev = rev + (x%10)*pow((10),p)
        p=p-1
        x=x//10
    return rev//10

def palindrome(a):
    if a==reverse(a):
        return 1
    return 0
def lych(a):
    x = a
    counter =0
    while(counter<=50):
        x = x+reverse(x)
        if(palindrome(x)==1):
            return 1
        counter = counter+1
    return 0

total =0
for i in range(10,10001):
    if(lych(i)==0):
        total = total+1
print(total)