#include <iostream>
#include <math.h>
int pow(int a, int b){
int f=1;
while(b>0){
    f=f*a;
    b=b-1;
}
return f;
}
int digit(int a){
int s=0;
while(a>0){
    s=s+1;
    a=a/10;

}
return s;
}

int revnum(int a){
    if(digit(a)==1){
        return a;
    }
int d = digit(a);
int x=0;
while(d>0){
    x=x+((a%10)*pow(10,d));
    a=a/10;
    d=d-1;
}
return x/10;
}


int main(){
int a =99;
int b =99;
int m=0;
int temp;
int smax =0;
for(a=999;a>=500;a--){
    for(b=999;b>=500;b--){
    if(revnum(a*b)==a*b){
        temp = a*b;
        if(temp>m){
            m = temp;
        }
    }


}
if(m>smax){
    smax = m;
}
}
printf("%d",smax);
}