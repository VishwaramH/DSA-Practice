#include<stdio.h>

int main()
{
    int num, rows, cols;
    printf("Enter the number:\n");
    scanf("%d",&num);
    rows = 1;
    while(rows<=num) {
    cols = 1;
        while(cols<=rows) {
            printf("* ");
            cols++;
        }
        rows++;
        printf("\n");
    }

    return 0;
}