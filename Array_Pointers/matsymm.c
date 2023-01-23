#include<stdio.h>
int main() {
    int rows,cols,flag=1;
    printf("Enter the no of rows and columns:\n");
    scanf("%d%d",&rows,&cols);
    int mat[rows][cols],trans[cols][rows];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            trans[j][i] = mat[i][j];
        }
    }
    // matrix in natural form
    printf("Matrix in natural form:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    // to print the transpose of a matrix
    printf("Transpose of the matrix:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    if(rows==cols) {
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                if(mat[i][j]!=trans[i][j]) {
                    flag = 0;
                    break;
                }
            }
            if(flag==0) {
                printf("The matrix is not symmetric\n");
                break;
            }
        }
        if(flag==1) {
            printf("The matrix is symmetric\n");
        }
    }
    return 0;
}