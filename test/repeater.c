#include<stdio.h>
#include<stdlib.h>

int finder(int element, int *arr, int len, int *m, int count, int *neg, int negCount) {
    if(len>=0) {
        if(element == *arr) {
            return finder(element, arr+1, len-1, m, count+1, neg, negCount);
        }
        else {
            *neg = *arr;
            return finder(element, arr+1, len-1, m, count, neg+1, negCount+1);
        }
    }
    else {
        *m = element;
        *(m+1) = count;
        return negCount;
    }
}

int calc(int *arr, int len, int *m, int *neg, int counter) {
    if(len>=0) {
        neg = malloc(2);
        len = finder(*arr,arr+1,len-1,m,1,neg,0);
        m = m + 2;
        counter += 2;
        arr = neg;
        return calc(arr, len-1, m, malloc(2), counter);
    }
    else {
        return counter;
    }
}

int main() 
{
    int *array, *result, num, resSize;
    printf("Enter the total number of values:\n");
    scanf("%d",&num);
    array = malloc(2);
    result = malloc(2);
    for(int i=0;i<num;i++) {
        scanf("%d",array+i);
    }
    resSize = calc(array,num-1,result,malloc(2),0);
    printf("The resultant array is:\n");
    for(int i=0;i<resSize;i++) {
        printf("%d ",*(result+i));
    }
    return 0;
}