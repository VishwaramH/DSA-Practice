#include<stdio.h>

int main()
{
    int num, arr[100],max;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(int j=1;j<num;j++) {
        if(arr[j]>max) {
            max = arr[j];
        }
    }
    printf("The largest element is: %d\n",max);
    return 0;
}