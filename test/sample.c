#include<stdio.h>

int checkstack(int i,int j,int pr[100],int st[100],int x,int y) {
    if(y<=0 && x<=0) {
        return 1;
    }
    int c=0;
    while(y>0) {
        if(st[y-2]!=i || st[y-1]!=j) {
            y = y-2;
        }
        else {
            c += 1;
            break;
        }
    }
    for(int i=0;i<x;i+=2) {
        if(pr[i]!=i || pr[i+1]!=j) {
            continue;
        }
        else {
            c += 1;
            break;
        }
    }
    if(c==0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int rows,cols,n,i,j;
    printf("Enter the no of rows and cols:\n");
    scanf("%d%d",&rows,&cols);
    int mat[rows][cols];
    printf("Enter the elements of matrix:\n");
    for(int a=0;a<rows;a++) {
        for(int b=0;b<cols;b++) {
            scanf("%d",&mat[a][b]);
        }
    }
    printf("Enter the no:\n");
    scanf("%d",&n);
    int pr[100],st[100],x=0,y=0,flag=0;
    for(int a=0;a<rows;a++) {
        for(int b=0;b<cols;b++) {
            if(n==mat[a][b]) {
                i = a;
                j = b;
                flag = 1;
                break;
            }
        }
        if(flag==1) {
            break;
        }
    }
            while(y>=0) {
                    if(j>0 && mat[i][j-1]==n && checkstack(i,j-1,pr,st,x,y)) {
                        st[y++] = i;
                        st[y++] = j-1;
                    }
                    if(j<cols-1 && mat[i][j+1]==n && checkstack(i,j+1,pr,st,x,y)) {
                        st[y++] = i;
                        st[y++] = j+1;
                    }
                    if(i>0 && mat[i-1][j]==n && checkstack(i-1,j,pr,st,x,y)) {
                        st[y++] = i-1;
                        st[y++] = j;
                    }
                    if(i<rows-1 && mat[i+1][j]==n && checkstack(i+1,j,pr,st,x,y)) {
                        st[y++] = i+1;
                        st[y++] = j;
                    }
                    if(i<rows-1 && j<cols-1 && mat[i+1][j+1]==n && checkstack(i+1,j+1,pr,st,x,y)) {
                        st[y++] = i+1;
                        st[y++] = j+1;
                    }
                    if(i>0 && j>0 && mat[i-1][j-1]==n && checkstack(i-1,j-1,pr,st,x,y)) {
                        st[y++] = i-1;
                        st[y++] = j-1;
                    }
                    if(i<rows-1 && j>0 && mat[i+1][j-1]==n && checkstack(i+1,j-1,pr,st,x,y)) {
                        st[y++] = i+1;
                        st[y++] = j-1;
                    }
                    if(i>0 && j<cols-1 && mat[i-1][j+1]==n && checkstack(i-1,j+1,pr,st,x,y)) {
                        st[y++] = i-1;
                        st[y++] = j+1;
                    }
                    pr[x++] = i;
                    pr[x++] = j;
                    if(y>0) {
                        i = st[y-2];
                        j = st[y-1];
                    }
                    y = y-2;
                } // end while
    for(int a=0;a<x;a++) {
        printf("%d ",pr[i]);
    }
    if(x==0 || flag==0) {
            printf("No regions found");
        }
        else {
            printf("\n%d",(x/2));
        }
    return 0;
}