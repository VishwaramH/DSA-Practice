#include<stdio.h>
#include<stdlib.h>

void swapRef(int *n1, int *n2)
{
    printf("Values in swapRef() function before swapping: %d %d\n",*n1,*n2);
    int *temp;
    temp = malloc(sizeof(int));
    *temp = *n1;
    *n1 = *n2;
    *n2 = *temp;
    printf("Values in swapRef() function after swapping: %d %d\n",*n1,*n2); 
}

int main()
{
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    printf("Values in main before swapping: %d %d\n",num1,num2);
    swapRef(&num1,&num2); // call by reference
    printf("Values in main after swapping: %d %d\n",num1,num2);
    return 0;
}