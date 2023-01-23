#include<stdio.h>

int main()
{
    int num, arr[100], temp;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    temp = arr[0];
    for(int i=1;i<num;i++) {
        arr[i-1] = arr[i];
    }
    arr[num-1] = temp;
    printf("The elements of the array after shifting towards left:\n");
    for(int i=0;i<num;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}