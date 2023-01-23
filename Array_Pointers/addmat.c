#include<stdio.h>
int main() {
    int rows,cols;
    printf("Enter the no of rows and columns:\n");
    scanf("%d%d",&rows,&cols);
    int mat1[rows][cols],mat2[rows][cols];
    printf("Enter the elements of matrix 1:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of matrix 2:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("The sum of matrices is:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("%d\t",mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}