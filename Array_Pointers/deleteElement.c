#include<stdio.h>

int main()
{
    int num,arr[100],pos;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array before deletion:\n");
    for(int i=0;i<num;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("Enter the position of the element to be deleted:\n");
    scanf("%d",&pos);
    printf("The elements in the array after deleting %d are:\n",arr[pos]);
    for(int i=pos;i<num;i++){
        arr[i] = arr[i+1];
    }
    num = num-1;
    for(int i=0;i<num;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}