#include<stdio.h>

int main()
{
    int num, arr[100],min;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(int j=1;j<num;j++) {
        if(arr[j]<min) {
            min = arr[j];
        }
    }
    printf("The smallest element is: %d\n",min);
    return 0;
}