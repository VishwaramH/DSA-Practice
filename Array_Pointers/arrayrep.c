#include<stdio.h>
int checknumber(int temp[],int arr,int x){
    int result =1;
    for(int i=0;i<x;i++){
        if(temp[i]==arr){
            result=0;
            break;
        }
    }
    return result;
}
int checkpos(int pos[],int i,int k ){
    int result=1;
    for(int m=0;m<k;m++){
        if(pos[m]==i){
            result=0;
            break;
        }
    }
    return result;
}
int main(){
    int arr[100],temp[100];
    int n;
    int k=0;
    int x=0;
    int pos[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        if(checkpos(temp,arr[i],x)){
        for(int j=i+1;j<n;j++){

            if(arr[i]==arr[j])
            {
               if(count%2==0){
                pos[k++]=j;
               }
               count=count+1;
            }
            
        }
        temp[x++]=arr[i];
        }
    }
    //printf("%d,%d",pos[0],pos[1]);
    for(int i=0;i<n;i++){
        if(checkpos(pos,i,k)){
        printf("\n%d",arr[i]);
        }
    }
}