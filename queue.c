#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct node {
    int data;
    struct node *next; 
};
struct node* deque(struct node *list) {
    struct node *temp;
    temp = list -> next;
    free(list);
    return temp;
}
void printNodes(struct node *p,int n) {
    if(n<=MAX){
    while(p != NULL) {
            printf("%d\n", p->data);
            p=p->next;
    }
    }
    else{
        while(p->next!=NULL){
            printf("%d\n", p->data);
            p=p->next;
            
        }
    }
}
struct node* traverseLastNode(struct node *traverseNode) {
    while(traverseNode->next != NULL) {
        traverseNode = traverseNode -> next;
    }
    return traverseNode;
}

struct node* createNode(int data) {
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void enque(struct node *src, struct node *pnode,int size) {
    if(size>=MAX){
        printf("Please deque an element!!The queue is full\n");
    }
    else{
        src = traverseLastNode(src);
        src->next = pnode;
}
}
int main() {
    struct node *p, *q, *pnode;
    int n, pos, value;
    scanf("%d", &n);

    //Creating first node outside the loop.
    scanf("%d", &value);
    p = createNode(value);
    q=p;

    //Creating remaining nodes
    for(int i=1;i<n;i++) {
       scanf("%d", &value);
       p->next = createNode(value);
       p=p->next;
    }

    //Insertion at begining
    pnode= createNode(70);
    enque(p, pnode,n);
    printf("\nAfter enque\n");
    p=q;
    printNodes(p,n);
    p=q;
    q = deque(q);

    p=q;
    printf("\nAfter deque\n");
    printNodes(p,n);


return 0;
}