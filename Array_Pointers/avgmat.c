#include<stdio.h>
int main() {
    int rows,cols,sum=0;
    float avg;
    printf("Enter the no of rows and columns:\n");
    scanf("%d%d",&rows,&cols);
    int mat[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            sum = sum + mat[i][j];
        }
    }
    avg = sum/(rows*cols);
    printf("The average is %.2f\n",avg);
}