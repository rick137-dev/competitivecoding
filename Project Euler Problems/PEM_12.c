#include <stdio.h>
#include <math.h>
int check(float a){
int x =10*a;
x = x%10;
if(x==0){
    return 1;

}else{
return 0;
}


}
int pyth(int n){
    int x;
    float f;
for(int a=1;a<n-1;a++){
    for(int b=a;b<n;b++){
        f=sqrt(a*a+b*b);
        if(check(f)==1 && a+b+f==1000){
                int d =f;
                printf("%d  %d  %d",a,b,d);
            break;
        }

    }
}


}
int main(){
pyth(1000);


}