#include<stdio.h>
#include<math.h>
int prime(int i){
    int factor=1,j,until=sqrt(i);
        if((until*until)==i) {
            factor=0;
        }
        if(factor) {
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                factor=0;
                break;
            }
        }
        }
        if(factor==0){
            return 1;
        }
        else
        return 0;
}
int main(){
    int num,i,j,k,count=0,sum=0,x=0,arr[x],c;
    scanf("%d",&num);
    for(i=2;i<=num;i++) {
        if((!prime(i))){
            arr[x++]=i;
        }
    }
    sum += arr[0];
    for(k=1;k<x;k++) {
            printf("%d ",arr[k]);
        sum += arr[k];
        c = prime(sum);
        if(c==1) {
            count++;
        }
    }
    printf("%d...",count);
    return 0;
}
