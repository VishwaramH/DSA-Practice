#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter the size of array:\n");
    scanf("%d",&num);
    float *arr,sum=0;
    arr = (float *)malloc(num*sizeof(float));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%f",arr+i);
        sum += *(arr+i);
    }
    printf("The average of the elements is: %.2f\n",sum/num);
    free(arr);
    return 0;
}