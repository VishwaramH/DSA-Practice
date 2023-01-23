#include<stdio.h>
#include<stdlib.h>
int linSearch(int num,int s,int *arr) {
    int i;
    for(i=0;i<num;i++) {
        if(*arr+i==s) {
            return i;
        }
    }
    return -1;
}
int main() {
    int T,num,*arr,search,i;
    printf("Enter the number of test cases:\n");
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&num);
        arr = malloc(num*sizeof(int)); 
        for(i=0;i<num;i++) {
            scanf("%d",arr+i);
        }
        printf("Enter the element to be searched:\n");
        scanf("%d",&search);
        printf("The element %d is present at index: %d\n",search,linSearch(num,search,arr));
    }
}