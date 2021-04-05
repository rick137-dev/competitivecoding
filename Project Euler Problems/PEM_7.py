max = 10000000000
i =1;
total =0;
while(i<=1000):
    total = (total + pow(i,i))%max
    i=i+1

print(total)
