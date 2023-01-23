#include<stdio.h>

int main() {
    int num,i,fill,max;
    printf("Enter the no of blocks:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the heights of the blocks:\n");
    for(i=1;i<=num;i++) {
        scanf("%d",&arr[i]);
    }
    fill = max = arr[1]; 
    for(i=1;i<num;i++) {
        if(arr[i]<=arr[i+1]) {
            if(arr[i+1]>=max){
                max = arr[i+1];
                fill = arr[i+1]*(i+1);
            }
            else {
                int j = i;
                while(arr[j]<arr[i+1]) {
                    fill = fill - arr[j];
                    arr[j] = arr[j] + (arr[i+1] - arr[j]);
                    fill = fill + arr[j];
                    j--;
                }
                fill = fill + arr[i+1];   
            }
        }
        else if(arr[i]>arr[i+1]) {
            if(arr[i]>=max) {
                max = arr[i];
            }
            fill = fill + arr[i+1];
        }
    }
    printf("Water filled capacity: %d\n",fill);
    // printf("After operation:\n");
    // for(i=1;i<=num;i++) {
    //     printf("%d ",arr[i]);
    // }
    return 0;
}
