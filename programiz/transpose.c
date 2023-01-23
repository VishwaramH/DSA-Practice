#include<stdio.h>
#include<stdlib.h>
void transpose(int **mat,int rows,int cols) {
    for(int i=0;i<cols;i++) {
        for(int j=0;j<rows;j++) {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int rows,cols;
    printf("Enter the no of rows and columns:\n");
    scanf("%d%d",&rows,&cols);
    int **mat;
    mat = (int**)malloc(rows*sizeof(int*));
    for(int i=0;i<rows;i++) {
        *(mat+i) = (int*)malloc(cols*sizeof(int));
    }
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            scanf("%d",*(mat+i)+j);
        }
    }
    printf("The elements before transpose:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("%d ",*(*(mat+i)+j));
        }
        printf("\n");
    }
    printf("The elements after transpose:\n");
    transpose(mat,rows,cols);
    return 0;
}