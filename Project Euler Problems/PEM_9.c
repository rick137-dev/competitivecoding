#include <stdio.h>
#include <math.h>
int digit(long long int a){
int f=0;
while(a>0){
    f=f+1;
    a=a/10;
}

return f;

}

int digitalsum(int a, int b){
int array[300];
int back = a;
int siz = digit(a);
int i=0;
for(i=0;i<=299;i++){
    array[i] =0;
}
for(i=0;i<=siz-1;i++){
    array[i] = a%10;
    a =(int)(a/10);

}
int x=1;
int temp;
int f=0;
for(x=1;x<b;x++){
    for(f=0;f<=299;f++){
            array[f]=array[f]*back;
        }
    for(f=0;f<=299;f++){
        temp = array[f];
        array[f] = array[f]%10;
        array[f+1] = array[f+1] +((temp-(temp%10))/10);

    }
    for(f=0;f<=299;f++){
        temp = array[f];
        array[f] = array[f]%10;
        array[f+1] = array[f+1] +((temp-(temp%10))/10);

    }
}
int t=0;
int total =0;
for(t=0;t<=299;t++){
    total = total+array[t];
}
return total;
}


int main(){
int k =99;
int j =99;
int m =0;
while(k>70){
    while(j>70){
        if(m<digitalsum(k,j)){
            m = digitalsum(k,j);
        }
        j=j-1;
    }
    k = k-1;
}
printf("%d",m);



}