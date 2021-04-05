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


int main(){
int x;
long long int s=0;
for(x=1;x<=MAX;x=x+1){
    if(prime(x)==1){
        s=s+x;
    }
}

printf("%lld\n",s);

}