x = 10000000000
lim = 17179869184
count =1
s=0
t = lim
while(4):
    s = (t*lim)%x
    t=s
    count = count+1
    if count>=230307:
        print(t)
        break

f=1
c=0
while(4):
    f=f*2
    c=c+1
    if(c==19):
        print(f)
        break

final = (1+(28433*524288*8443602944))%x
print(final)