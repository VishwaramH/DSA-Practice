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

int arrays_equal(int arr1[], int arr2[], int n1, int n2) {
    sort(arr1, n1);
    sort(arr2, n2);
    for(int i=0;i<n1;i++) {
        if(arr1[i] != arr2[i]) {
            return 0;
        }
    }
}

int main() {
    int num1,num2;
    printf("Enter the size of the array1:\n");
    scanf("%d",&num1);
    printf("Enter the size of the array2:\n");
    scanf("%d",&num2);
    int arr1[num1],arr2[num2];
    printf("Enter the element of the array1:\n");
    for(int i=0;i<num1;i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of the array2:\n");
    for(int i=0;i<num2;i++) {
        scanf("%d",&arr2[i]);
    }
    if(arrays_equal(arr1,arr2,num1,num2)==0) {
        printf("The arrays are not same..\n");
    }
    else {
        printf("The arrays are same..\n");
    }
    return 0;
}