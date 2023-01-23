#include<stdio.h>

int main()
{
    int num, pos;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to delete an element:\n");
    scanf("%d",&pos);
    if(pos-1>=num){
        printf("Deletion not possible\n");
    } 
    else {
        for(int i=pos-1;i<num;i++){
            arr[i] = arr[i+1];
        }
    }
    printf("After deleting:\n");
    for(int i=0;i<num-1;i++) {
        printf("%d\t",arr[i]);
    }
}