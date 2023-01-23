// insertion sort => time complexity = O(n^2) , space complexity = O(1)
#include<stdio.h>
#include<stdlib.h>
void insSort(int *arr,int size) {
    for(int step=1;step<size;step++) {
        int key = arr[step];
        int j = step-1;
        while(key<arr[j] && j>=0) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int size,*arr;
    scanf("%d",&size);
    arr = malloc(size*sizeof(int));
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    insSort(arr,size);
    printf("The sorted array is:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}