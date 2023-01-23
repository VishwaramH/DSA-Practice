#include<stdio.h>

int main() {
    int num, arr[100],temp;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    temp = arr[num-1];
    for(int i=num-1;i>0;i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    printf("The elements of the array after shifting towards right:\n");
    for(int i=0;i<num;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}