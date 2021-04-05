int squaredigit(long int a){
long int x =a;
long int s =0;
while(x>0){
    s=s+(x%10)*(x%10);
    x=(int)x/10;
}
return s;
}

int check(int a){
int x =a;
while(4){
    if(x==89){
        return 89;
    }
    if(x==1){
        return 1;
    }
    x=squaredigit(x);
}

}
int main(){
int arr[101];
int i =0;
for(i=0;i<=100;i++){
    arr[i] =i;
}
long int s=0;
int f=1;
while(f<=10000000){
    if(check(f)==89){
        s=s+1;
    }
    f=f+1;
}
printf("%d",s);
}