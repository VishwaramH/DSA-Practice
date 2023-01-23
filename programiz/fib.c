#include<stdio.h>
int main() {
    int num,term1=0,term2=1,nextTerm,i;
    printf("Enter the number of terms:\n");
    scanf("%d",&num);
    // fibonacci series of n terms
    printf("Fibonacci series:\n");
    for(i=0;i<num;i++) {
        printf("%d ",term1);
        nextTerm = term1+term2;
        term1 = term2;
        term2 = nextTerm;
    }

    // fibonacci series upto a certain number
    // printf("Enter a positive integer:\n");
    // scanf("%d",&num);
    // printf("Fibonacci series:\n%d %d ",term1,term2);
    // nextTerm = term1 + term2;
    // while(nextTerm<=num) {
    //     printf("%d ",nextTerm);
    //     term1 = term2;
    //     term2 = nextTerm;
    //     nextTerm = term1 + term2;
    // }
    return 0;
}