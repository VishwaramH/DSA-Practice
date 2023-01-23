// using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
#include<float.h>  // to use FLT_MIN
int main()
{
    int num;
    float max = FLT_MIN; // min value for float
    printf("Enter the size of array:\n");
    scanf("%d",&num);
    float *data;
    data = malloc(num*sizeof(float));
    // data = NULL;
    if(data==NULL) {
        printf("Error!!!Memory not allocated\n");
        exit(0);
    }
    for(int i=0;i<num;i++) {
        scanf("%f",data+i);
        if(*(data+i)>max){
            max = *(data+i);
        }
    }
    printf("Largest element is: %.2f\n",max);
    return 0;
}