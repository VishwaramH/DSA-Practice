#include<stdio.h>

int main()
{
    int num,arr[100],search, flag=0;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&search);
    for(int i=0;i<num;i++) {
        if(arr[i]==search) {
            printf("The element %d is found in position %d\n",arr[i],i);
            flag=1;
            break;
        }
    }
    if(flag==0) {
        printf("Element is not found\n");
    }
    return 0;
}