#include<stdio.h>
#include<malloc.h>
struct stack{
    int i;
    int j;
    struct stack *next;
};

int checkstack(struct stack *p,int i,int j,int pr[100],int x,int y) {
    if(y<=0 && x<=0) {
        return 1;
    }
    int c=0;
    while(p!=NULL) {
        if(p->i!=i || p->j!=j) {
            p = p->next;
        }
        else {
            c += 1;
            break;
        }
    }
    for(int i=0;i<x;i=i+2) {
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

struct stack* traverseLastNode(struct stack *traverseNode) {
    while(traverseNode->next->next != NULL) {
        traverseNode = traverseNode -> next;
    }
    return traverseNode;
}
void push(struct stack *src, struct stack *pnode) {
    src = traverseLastNode(src);
    src->next = pnode;
}

void pop(struct stack *p) {
    struct stack *temp;
    temp = p->next;
    p->next = NULL;
    free(temp);
}
struct stack* createNode(int i,int j) {
    struct stack *temp;
    temp = malloc(sizeof(struct stack));
    temp->i = i;
    temp->j = j;
    temp->next = NULL;
    return temp;
}

int main() {
    int rows,cols,n;
    printf("Enter the no of rows and cols:\n");
    scanf("%d%d",&rows,&cols);
    int mat[rows][cols],s=0,uni[50],ind[100];
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Enter the no:\n");
    scanf("%d",&n);
    int pr[100],x=0,y=0,flag=0;
    struct stack *p,*q,*l;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if(n==mat[i][j]) {
                flag=1;
                while(y>=0) {
                if(mat[i][j-1]==n && j>0 && checkstack(p,i,j-1,pr,x,y)) {
                    if(y<=0) {
                        p = createNode(i,j-1);
                        q = p;
                        l = p;
                        y++;
                    }
                    else {
                        l->next = createNode(i,j-1);
                        l = l->next;
                        y++;
                    }
                }
                if(j<cols-1 && mat[i][j+1]==n && checkstack(p,i,j+1,pr,x,y)) {
                    if(y<=0) {
                        p = createNode(i,j+1);
                        q = p;
                        l = p;
                        y++;
                    }
                    else {
                        l->next = createNode(i,j+1);
                        l = l->next;
                        y++;
                    }
                }
                if(i>0 && mat[i-1][j]==n && checkstack(p,i-1,j,pr,x,y)) {
                    if(y<=0) {
                        p = createNode(i-1,j);
                        q = p;
                        l = p;
                        y++;
                    }
                    else {
                        l->next = createNode(i-1,j);
                        l = l->next;
                        y++;
                    }
                }
                if(i<rows-1 && mat[i+1][j]==n && checkstack(p,i+1,j,pr,x,y)) {
                    if(y<=0) {
                        p = createNode(i+1,j);
                        q = p;
                        l = p;
                        y++;
                    }
                    else {
                        l->next = createNode(i+1,j);
                        l = l->next;
                        y++;
                    }
                }
                
                if(i<rows-1 && j<cols-1 && mat[i+1][j+1]==n && checkstack(p,i+1,j+1,pr,x,y)) {
                    if(y<=0) {
                        p = createNode(i+1,j+1);
                        q = p;
                        l = p;
                        y++;
                    }
                    else {
                        l->next = createNode(i+1,j+1);
                        l = l->next;
                        y++;
                    }
                }
                if(i>0 && j>0 && mat[i-1][j-1]==n && checkstack(p,i-1,j-1,pr,x,y)) {
                    if(y<=0) {
                        p = createNode(i-1,j-1);
                        q = p;
                        l = p;
                        y++;
                    }
                    else {
                        l->next = createNode(i-1,j-1);
                        l = l->next;
                        y++;
                    }
                }
                
                if(i<rows-1 && j>0 && mat[i+1][j-1]==n && checkstack(p,i+1,j-1,pr,x,y)) {
                    if(y<=0) {
                        p = createNode(i+1,j-1);
                        q = p;
                        l = p;
                        y++;
                    }
                    else {
                        l->next = createNode(i+1,j-1);
                        l = l->next;
                        y++;
                    }
                }
                if(i>0 && j<cols-1 && mat[i-1][j+1]==n && checkstack(p,i-1,j+1,pr,x,y)) {
                    if(y<=0) {
                        p = createNode(i-1,j+1);
                        q = p;
                        l = p;
                        y++;
                    }
                    else {
                        l->next = createNode(i-1,j+1);
                        l = l->next;
                        y++;
                    }
                }
                
                pr[x++] = i;
                pr[x++] = j;
                i = l->i;
                j = l->j;
                if(y<=1) {
                    free(l);
                }
                else {
                    l = traverseLastNode(p);
                    pop(l);
                }
                y--;
                if(y<0) {
                    break;
                }
            } // end while
            }  // if
            if(flag==1) {
                break;
            }
        } // for j
        if(flag==1) {
            break;
        }
    } // for i
    for(int i=0;i<x;i++) {
        printf("%d ",pr[i]);
    }
    if(x==0) {
            printf("No regions found");
        }
        else {
            printf("%d...",x/2);
        }
    
    return 0;
}