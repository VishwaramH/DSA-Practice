#include<stdio.h>

// bubble sort
int sort(int arr[],int num) {
    int i,j;
    for(i=0;i<num-1;i++) {
        for(j=0;j<num-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int num,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    sort(arr,num);
    printf("sorted..\n");
    for(i=0;i<num;i++) {
        printf("%d ",arr[i]);
    }
    printf("\nThe second smallest element is: %d",arr[1]);
}