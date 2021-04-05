#include <stdio.h>
#include <math.h>
#define MAX 2000000
int digit(a){
int s=0;
while(a>=1){
    s=s+1;
    a=a/10;
}
return s;

}
long long int power(a,b){
long long f=1;
int t=0;
for(t=0;t<b;t++){
    f=f*a;
}
return f;

}
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

   long int p =2;
   long int n =500000;
   int  *tarray;
   int    *array;
   array = (int *)malloc(sizeof(int)*(n+1));
   tarray = (int*)malloc(sizeof(int)*(n+1));
for(long int fill =0;fill<=n;fill++){
    array[fill]=1;
}
array[0]=0;
array[1] =0;
for(p=2;p*p<=n;p++){
    if(array[p]==1){
         for (long int i=p*p; i<=n; i=i+ p) {
                array[i] = 0;
        }
    }



}


long int d=0;
long long int q =0;
for(d=0;d<=n;d++){
    if(array[d]==1){
        tarray[q] = d;
        q=q+1;
    }
}

int r =20;
long long int size =0;
int l=0;
int start =0;
int m =0;
int stay;
for(r=20;r<=1000;r++){
for(start=0;start<=r;start++){
        size=0;
for(l=start;l<=r+start;l++){
    size = size+tarray[l];
}
if(size>=1000000){
    break;
}
if(prime(size)==1){
    printf("%d  %d\n",size,r);
}
if(size>m && prime(size)==1){
    m = size;
    stay = r;
}
}


}
printf("%d        %d",m,stay);

}
