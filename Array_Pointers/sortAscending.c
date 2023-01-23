#include<stdio.h>

int main()
{
    int num,arr[100],temp;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the element of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++) {
        for(int j=i+1;j<num;j++) {
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The array after sorted in ascending order:\n");
    for(int i=0;i<num;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}