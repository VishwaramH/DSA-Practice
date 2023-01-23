#include<stdio.h>
#include<stdlib.h>

int main() {
    int num;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    int arr[num],res[num],flag=0;
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++) {
        if(arr[i]!=arr[i+1]) {
            res[i] = arr[i];
            flag = flag+1;
        }
        else if(arr[i]==arr[i+1] && (flag%2)!=0) {
            flag = 0;
        }        
    }
    for(int i=0;i<num;i++) {
            printf("%d ",res[i]);
        }
    return 0;
}