#include<stdio.h>

int main() 
{
    int mat[10][10], rows, cols;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    printf("Enter the number of columns:\n");
    scanf("%d",&cols);
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The elements of the matrix are:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}