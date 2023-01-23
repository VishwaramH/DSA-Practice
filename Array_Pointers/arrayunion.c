#include<stdio.h>

int sort(int arr[],int num) {
    for(int i=0;i<num-1;i++) {
        for(int j=0;j<num-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void arrayUnion(int arr1[], int arr2[], int num1, int num2) {
    int  i=0, j=0;
    while(i<num1 && j<num2) {
        if(arr1[i]<arr2[j]) {
            printf("%d ",arr1[i]);
            i++;
        }
        else if(arr1[j]<arr2[i]) {
            printf("%d ",arr2[j]);
            j++;
        }
        else {
            printf("%d ",arr2[j]);
            j++;
            i++;
        }
    }
    while(i<num1) {
        printf("%d ",arr1[i]);
        i++;
    }
    while(j<num2) {
        printf("%d ",arr2[j]);
        j++;
    }
}
int main() {
    int num1,num2,i,j;
    printf("Enter the size of array1:\n");
    scanf("%d",&num1);
    printf("Enter the size of array2:\n");
    scanf("%d",&num2);
    int arr1[num1], arr2[num2];
    printf("Enter the elements of array1:\n");
    for(i=0;i<num1;i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of array2:\n");
    for(j=0;j<num2;j++) {
        scanf("%d",&arr2[j]);
    }
    sort(arr1,num1);
    sort(arr2,num2);
    printf("The union of two arrays:\n");
    arrayUnion(arr1,arr2,num1,num2);
    return 0;
}