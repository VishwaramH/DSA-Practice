#include<stdio.h>
int main() {
    int num,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array:\n");
    for(i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Reverse of the array:\n");
    for(i=num-1;i>=0;i--) {
        printf("%d ",arr[i]);
    } 
}