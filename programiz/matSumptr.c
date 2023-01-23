#include<stdio.h>
#include<stdlib.h>
int rowMax(int **arr,int rows,int cols,int *row){
    int i,j,sum=0,max=0;
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            sum = sum + *(*(arr+i)+j);
        }
        if(sum>max) {
            max = sum;
            *row = i+1;
        }
        sum=0;
    }
    return max;
}
int colMax(int **arr,int rows, int cols,int *col) {
    int i,j,sum=0,max=0;
    for(i=0;i<cols;i++) {
        for(j=0;j<rows;j++) {
            sum = sum + *(*(arr+j)+i);
        }
        if(sum>max) {
            max = sum;
            *col = i+1;
        }
        sum=0;
    }
    return max;
}
int leftDiag(int **arr,int rows,int cols) {
    int i,j,sum=0;
    for(i=0;i<cols;i++) {
        for(j=0;j<rows;j++) {
            if(i==j) {
                sum = sum + *(*(arr+i)+j);
            }
        }
    }
    return sum;
}
int rightDiag(int **arr,int rows,int cols) {
    int i,j,sum=0;
    for(i=0,j=cols-1;i<rows && j>=0;i++,j--) {
            sum = sum + *(*(arr+i)+j);
    }
    return sum;
}
int main() {
    int **arr,rows,cols,i,j,maxR,maxC,*rowno,*colno,left,right;
    printf("Enter no of rows and cols:\n");
    scanf("%d%d",&rows,&cols);
    arr = malloc(rows*sizeof(int*));
    for(i=0;i<rows;i++) {
        *(arr+i) = malloc(cols*sizeof(int));
    }
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            scanf("%d",*(arr+i)+j);
        }
    }
    rowno = malloc(sizeof(int));
    colno = malloc(sizeof(int));
    maxR = rowMax(arr,rows,cols,rowno);
    maxC = colMax(arr,rows,cols,colno);
    left = leftDiag(arr,rows,cols);
    right = rightDiag(arr,rows,cols);
    // printf("\n%d %d",maxR,*rowno);
    // printf("\n%d %d",maxC,*colno);
    // printf("\n%d",left);
    // printf("\n%d",right);
    if(maxR>=maxC && maxR>=left && maxR>=right) {
        printf("Row %d sum is %d\n",*rowno,maxR);
    }
    else if(maxC>=left && maxC>=right) {
        printf("Column %d sum is %d\n",*colno,maxC);
    }
    else if(left>=right) {
        printf("Diagonal 1 sum is %d\n",left);
    }
    else{
        printf("Diagonal 2 sum is %d\n",right);
    }
    return 0;
}



// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//     int **arr,rows,cols,i,j;
//     printf("Enter the no of rows and columns:\n");
//     scanf("%d%d",&rows,&cols);
//     arr = (int**)malloc(rows*sizeof(int*));
//     for(i=0;i<rows;i++) {
//         *(arr+i) = (int*)malloc(cols*sizeof(int));
//     }
//     printf("Enter the elements of the array:\n");
//     for(i=0;i<rows;i++) {
//         for(j=0;j<cols;j++) {
//             scanf("%d",*(arr+i)+j);
//         }
//     }
//     printf("The elements of the array are:\n");
//     for(i=0;i<rows;i++) {
//         for(j=0;j<cols;j++) {
//             printf("%d ",*(*(arr+i)+j));
//         }
//     }
//     return 0;
// }