#include<stdio.h>

int main()
{
    int num,ele, flag=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the search element:\n");
    scanf("%d",&ele);
    for(int i=0;i<num;i++) {
        if(arr[i]==ele) {
            flag = 1;
            printf("Element %d is found at index %d\n",ele,i);
            break;
        }
        else{
            continue;
        }
    }
    if(flag==0) {
        printf("Element not found\n");
    }
}