#include<stdio.h>

int checkArray(int arr[1000], int len, int row, int col) {
    int res=1;
    for(int i=0; i<len; i=i+2) {
        if(arr[i] == row && arr[i+1] == col) {
            res = 0;
        }
    }
    return res;
}
int poschecker(int i, int j, int n) {
    int res=0;
    if((i >= 0 && i<n) && (j>=0 && j<n)) {
        res = 1;
    }
    return res;
}

int countAdjacent(int mat[100][100], int n, int row, int col) {
    int checker = 1, stack[1000], proc[1000], stackSize = 0, count=0, pl=0, initial =0;
    while(checker) {
        if(checkArray(stack, stackSize, row, col-1) && checkArray(proc, pl, row, col-1) && poschecker(row, col-1, n) && mat[row][col] == mat[row][col-1]) {
            stack[stackSize++] = row;
            stack[stackSize++] = col-1;
        }
        if(checkArray(stack, stackSize, row, col+1) && checkArray(proc, pl, row, col+1) && poschecker(row, col+1, n) && mat[row][col] == mat[row][col+1]) {
            stack[stackSize++] = row;
            stack[stackSize++] = col+1;
        }
        if(checkArray(stack, stackSize, row-1, col) && checkArray(proc, pl, row-1, col) && poschecker(row-1, col, n) && mat[row][col] == mat[row-1][col]) {
            stack[stackSize++] = row-1;
            stack[stackSize++] = col;
        }
        if(checkArray(stack, stackSize, row+1, col) && checkArray(proc, pl, row+1, col) && poschecker(row+1, col, n) && mat[row][col] == mat[row+1][col]) {
            stack[stackSize++] = row+1;
            stack[stackSize++] = col;
        }
        if(checkArray(stack, stackSize, row-1, col-1) && checkArray(proc, pl, row-1, col-1) && poschecker(row-1, col-1, n) && mat[row][col] == mat[row-1][col-1]) {
            stack[stackSize++] = row-1;
            stack[stackSize++] = col-1;
        }
        if(checkArray(stack, stackSize, row+1, col+1) && checkArray(proc, pl, row+1, col+1) && poschecker(row+1, col+1, n) && mat[row][col] == mat[row+1][col+1]) {
            stack[stackSize++] = row+1;
            stack[stackSize++] = col+1;
        }
        if(checkArray(stack, stackSize, row-1, col+1) && checkArray(proc, pl, row-1, col+1) && poschecker(row-1, col+1, n) && mat[row][col] == mat[row-1][col+1]) {
            stack[stackSize++] = row-1;
            stack[stackSize++] = col+1;
        }
        if(checkArray(stack, stackSize, row+1, col-1) && checkArray(proc, pl, row+1, col-1) && poschecker(row+1, col-1, n) && mat[row][col] == mat[row+1][col-1]) {
            stack[stackSize++] = row+1;
            stack[stackSize++] = col-1;
        }
        count++;
        proc[pl++] = row;
        proc[pl++] = col;
        printf("%d\t, %d\n", row, col);
        if(initial) {
            row = stack[stackSize - 2];
            col = stack[stackSize - 1];
        }
        initial = 1;
        stackSize = stackSize - 2;
        if(stackSize == 0) {
            checker = 0;
            break;
        }
    }
    return count;
}

int main(){
    int mat[100][100],n,inp, row, col;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    scanf("%d", &inp);
    int checker = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(mat[i][j] == inp) {
                row = i;
                col = j;
                checker=0;
                break;
            }
        }
        if(!checker) {
            break;
        }
    }
    printf("%d\t%d\t", row, col);
    printf("%d\n", countAdjacent(mat, n, row, col));
}