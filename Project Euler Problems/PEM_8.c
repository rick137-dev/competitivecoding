#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#define MAX 2000000

int prime(a){
if(a==1){
    return 0;
}
if(a==2){
    return 1;
}
if(a==3){
    return 1;
}else{

int x = sqrt(a)+1;
for(int i=2;i<=x;i++){
    if(a%i==0){
        return 0;
    }
}

}


return 1;
}
int testing(a,b){
int n=0;
int tots =0;
for(n=0;n<b;n++){
    if(prime(abs((n*n)+a*n+b)) ==1){
        tots = tots+1;
    }
    if(prime(abs((n*n)+a*n+b)) ==0){
        break;
    }
}


return tots;
}

int main(){
int a =0;
int max =0;
int maxa,maxb =0;
int b =0;
for(a=-999;a<=999;a++){
    for(b=-1000;b<=1000;b++){
                if(testing(a,b)>max){
                    printf("%d  %d  %d\n",max,maxa,maxb);
                    max = testing(a,b);
                    maxa =a;
                    maxb = b;
                }


    }
}



printf("%d  %d   %d   %d\n",max,maxa,maxb,maxa*maxb);

}