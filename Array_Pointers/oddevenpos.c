#include<stdio.h>

int main() {
    int num1,num2=1,i,j,k=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&num1);
    int arr[num1],res[num2];
    printf("Enter the elements of the array1:\n");
    for(i=0;i<num1;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num1;i++) {
        int flag = 0;
        for(j=i+1;j<num1;j++) {
            if(arr[i]!=arr[j]) {
                printf("%d ",arr[i]);
            }
            else if() 
        }
    }
    for(i=0;i<num2;i++) {
        printf("%d ",res[i]);
    }
    return 0;
}