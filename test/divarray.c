#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,num;
    int *arr;
    scanf("%d",&size);
    arr = malloc(size*sizeof(int));
    for(int i=0;i<size;i++) {
        scanf("%d",arr+i);
    }
    scanf("%d",&num);
    for(int i=0;i<size;i++){
        if(num % arr[i]==0){
            printf("%d ",num/arr[i]);
        }
        else{
            printf("0 ");
        }
    }
    return 0;
}