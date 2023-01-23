#include<stdio.h>

int main()
{
    int num,arr[100],pos,posElement;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("Enter the element to be inserted:\n");
    scanf("%d",&posElement);
    printf("Enter the position:\n");
    scanf("%d",&pos);
    for(int i=num-1;i>=pos;i--) {
        arr[i+1] = arr[i];
    }
    num=num+1;
    arr[pos] = posElement;
    for(int i=0;i<num;i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}