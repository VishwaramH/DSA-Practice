// 4

// 0 3 9 6       

// 1 4 4 5

// 8 2 5 4

// 1 8 5 9

// s = a[0][0]
// i,j+1 
// s = s/2 + a[0][1]
// j++;

// i+1 j
// s = s/2 + a[1][0]
// i++;
#include<stdio.h>
int main() {
	int size,rows,cols,score,rowscount=0,colscount=0;
    scanf("%d",&size);
    int array[size][size];
    for(rows=0;rows<size;rows++){
    	for(cols=0;cols<size;cols++){
        	scanf("%d",&array[rows][cols]);
        }
    }
    printf("%d......",array[1][3]<array[2][4]);
    score = 0;
    while((rowscount+1)<size || (colscount+1)<size){
    	if((colscount+1)<size && (rowscount+1)<size && array[rowscount][colscount+1]<array[rowscount+1][colscount]){
            score = (int)(score/2) + array[rowscount][colscount+1]; // 2+3=5 //2+1=3//1+5=6//
            colscount++; // 0 // 1 // 2 // 3 //
        }
        else if((colscount+1)<size && !((rowscount+1)<size) && array[rowscount][colscount+1]<array[rowscount+1][colscount])
        {
            score = (int)(score/2) + array[rowscount][colscount+1]; // 3+4=7
            colscount++; // 4
        }

// 5
// 0  82  2  6  7
// 4  3   1  5  21
// 6  4  20  2  8
// 6  6  64  1  8
// 1  65  1  6  4

// o/p = 7

        else if((rowscount+1)<size && !((colscount+1)<size)) 
        {
            score = (int)(score/2) + array[rowscount+1][colscount]; // 0+4=4 // 3+2=5// 2+1=3//1+6=7//
            rowscount++; // 1 // 2 //3 //4
        }
    }
    
    printf("%d",score);
    return 0;
}


// 0 3 9 6       

// 1 4 4 5

// 8 2 5 4

// 1 8 5 9

