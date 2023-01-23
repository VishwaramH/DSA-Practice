#include<stdio.h>
void displayMat(int res[][10],int r1,int c2) {
    for(int i=1;i<=r1;i++) {
        for(int j=1;j<=c2;j++) {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
void multiplyMat(int a[][10],int b[][10],int res[][10],int r1,int c1,int r2,int c2) {
    for(int i=1;i<=r1;i++) {
        for(int j=1;j<=c2;j++) {
            res[i][j] = 0;
        }
    }
    for(int i=1;i<=r1;i++) {
        for(int j=1;j<=c2;j++) {
            for(int k=1;k<=c1;k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void readValues(int a[][10],int b[][10],int r1,int c1,int r2,int c2)
{
    printf("Enter the values of matrix1:\n");
    for(int i=1;i<=r1;i++){
        for(int j=1;j<=c1;j++) {
            printf("Enter a%d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of matrix2:\n");
    for(int i=1;i<=r2;i++) {
        for(int j=1;j<=c2;j++) {
            printf("Enter b%d%d:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
}
int main()
{
    int a[10][10],b[10][10],res[10][10],r1,c1,r2,c2;
    printf("Enter the no of rows and columns of matrix1:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the no of rows and columns of matrix2:\n");
    scanf("%d%d",&r2,&c2);
    if(r2!=c2) {
        printf("Error!!Ente the rows and columns again:\n");
        printf("Enter the no of rows and columns of matrix1:\n");
        scanf("%d%d",&r1,&c1);
        printf("Enter the no of rows and columns of matrix2:\n");
        scanf("%d%d",&r2,&c2);
    }
    readValues(a,b,r1,c1,r2,c2);
    multiplyMat(a,b,res,r1,c1,r2,c2);
    displayMat(res,r1,c2);
    return 0;
}