#include<stdio.h>
#include<stdlib.h>
void process(int *arr,int i,int size){
    int small=arr[i],temp,pos=i;
    for(int j=i+1;j<size;j++) {
        if(arr[j]<small) {
            small = arr[j];
            pos = j;
        }
    }
    if(pos!=i) {
        temp = arr[i];
        arr[i] = small;
        arr[pos] = temp;
    }
}
void sortTimes(int *arr,int size,int num){
    for(int i=0;i<num;i++) {
        process(arr,i,size);
    }
}
int main()
{
    int size,num;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int *arr = malloc(size*sizeof(int));
    printf("Enter the elements of the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",arr+i);

    }
    printf("Enter the number of sorting times\n");
    scanf("%d",&num);
    sortTimes(arr,size,num);
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}