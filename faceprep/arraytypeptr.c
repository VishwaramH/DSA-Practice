#include<stdio.h>
#include<stdlib.h>
int *createArray(int n) {
    int *a;
    a=malloc(n*(sizeof(int)));
    return a;
}

void readArray(int *arr, int n) {
    for(int i=0;i<n;i++) {
        scanf("%d",arr+i);
    }
}

void arrayType(int *arr, int num) {
    int odd=0, even=0;
    for(int i=0;i<num;i++) {
        if(arr[i]%2==0) {
            even++;
        }
        if(arr[i]%2!=0) {
            odd++;
        }
    }
    if(even==num) {
        printf("Even elements\n");
    }
    else if(odd==num) {
        printf("Odd elements\n");
    }
    else {
        printf("Mixed elements\n");
    }
}

int main() {
    int num, *arr;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    arr = createArray(num);
    printf("Enter the elements of the array:\n");
    readArray(arr,num);
    arrayType(arr, num);
    return 0;
}