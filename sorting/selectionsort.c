// selection sort => time complexity = O(n^2) , space complexity = O(1)
#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int *arr,int size) {
    for(int step=0;step<size-1;step++) {
        int min = step;
        int i;
        for(i=step+1;i<size;i++) {
            if(arr[i]<arr[min]) {
                min = i;
            }
        }
        swap(&arr[min],&arr[step]);
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
    sort(arr,size);
    printf("The sorted array is:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}