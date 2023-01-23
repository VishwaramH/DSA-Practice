#include<stdio.h>
#include<math.h>

int main()
{
    int num, factor, until;
    printf("Enter the number:\n");
    scanf("%d",&num);
    factor = 1;
    until = sqrt(num);
    printf("The factors are:\n");
    while(factor<until) {
        if(num % factor == 0) {
            printf("%d %d ",factor,num/factor);
        }
        factor = factor+1;
    }
    if(until * until == num) {
        printf("%d",factor);
    }
    return 0;
}