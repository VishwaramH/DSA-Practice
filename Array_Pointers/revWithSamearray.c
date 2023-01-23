#include<stdio.h>

int main()
{
    int num,arr[100],temp,i,j;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    i = 0;
    j = num-1;
    while(i<j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("The reverse of the array is:\n");
    for(int i=0;i<num;i++) {
        printf("%d\t",arr[i]);
    }
    return 0;
}

// 1 2 3 4
// 4 2 3 1
// 4 3 2 1 