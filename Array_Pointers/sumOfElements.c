#include<stdio.h>

int main()
{
    int num, arr[100],sum=0;
    printf("Enter the no of elements\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++) {
        sum = sum+arr[i];
    }
    printf("Sum of the elements is: %d\n",sum);
    return 0;
}