import math
import sys
sys.setrecursionlimit(8000)
limit = 10**9
from functools import lru_cache
phi = (1+math.sqrt(5))/2
x = 127497364893
y = 374947372782200303
def first_9_digits(n):
    l = math.log10(n)
    f = l-(int(l))
    return math.floor(10**(f+8))

def first_9_digits_fib(n):
    fibb = n*math.log10(phi) -math.log10(math.sqrt(5))
    f = fibb-(int(fibb))
    return math.floor(10**(f+8))

def fibn(n):
    return (phi**n)/math.sqrt(5)

@lru_cache(maxsize = 100000000)
def nine_fib(n):
    if n ==1:
        value= 1
    elif n ==2:
        value= 1
    else:
        value = ((nine_fib(n-1)%limit)+(nine_fib(n-2)%limit)%limit)
    return value

def pandigital(n):
    a=n
    fin = [1,2,3,4,5,6,7,8,9]
    temp = [0,0,0,0,0,0,0,0,0]
    for i in range(0,9):
        temp[i] = a%10
        a=math.floor(a/10)
    temp.sort()
    if(temp==fin):
        return 1
    else:
        return 0

n = 89
for i in range(89,400000):
    if(pandigital(nine_fib(i))==1 and pandigital(first_9_digits_fib(i))==1):
        print(i)
