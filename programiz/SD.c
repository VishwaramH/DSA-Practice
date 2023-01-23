#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float calculateSD(float *ele,float avg,int num) {
    float SD=0;
    for(int i=0;i<num;i++)
    {
        SD += pow(*(ele+i)-avg,2);
    }
    SD = SD/num;
    return sqrt(SD);
}
int main()
{
    int num;
    printf("Enter the no of elements:\n");
    scanf("%d",&num);
    float *ele,sum=0;
    ele = (float*)malloc(num*sizeof(float));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) 
    {
        scanf("%f",ele+i);
        sum += *(ele+i);
    }
    printf("The standard deviation is:%f\n",calculateSD(ele,(sum/num),num));
    return 0;
}