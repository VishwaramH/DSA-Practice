#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    int *arr = malloc(num*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++){
        scanf("%d",arr+i);
    }
    printf("The elements of the array are:\n");
    for(int i=0;i<num;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}