#include<stdio.h>

int main()
{
    int num, arr[100],rev[100]; // reverse using different array
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++) {
        rev[i] = arr[num-i-1];
    }
    printf("The elements of the array in reverse order:\n");
    for(int i=0;i<num;i++) {
        printf("%d\t",rev[i]);
    }
    return 0;
}