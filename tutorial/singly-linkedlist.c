#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node* createNode(int value) {
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp -> data = value;
    temp -> next = NULL;
    return temp;
}

void printNodes(struct node *p) {
    while(p!=NULL) {
        printf("%d ",p->data);
        p = p->next;
    }
}

struct node* lastNode(struct node *p) {
    while(p->next!=NULL) {
        p = p->next;
    }
    return p;
}

int main() {
    int num, value;
    printf("Enter the number of node:\n");
    scanf("%d",&num);
    struct node *p, *q, *pnode, *pnode2;
    p = malloc(sizeof(struct node));
    scanf("%d",&value); // 10
    p -> data = value;
    p -> next = NULL;
    q = p;

    for(int i=1;i<num;i++) { // 1 2 3// num=4
        scanf("%d",&value); // 20 30 40
        p->next = createNode(value);
        p = p->next;
    }
    p = q;
    printf("Printing nodes..\n");
    printNodes(p);
    p = q;

    // insertion at beginning
    printf("\nEnter node to insert at first: ");
    scanf("%d",&value);
    pnode = createNode(value); // pnode = temp
    pnode -> next = p;
    p = q = pnode;
    printf("\nAter inserting at first: ");
    printNodes(p);
    p = q;
    
    //insertion at last
    printf("\nEnter node to insert at last");
    scanf("%d",&value);
    pnode2 = createNode(value);
    p = lastNode(p);
    p->next = pnode2;
    p = q;
    printf("\nAfter inserting node at last: ");
    printNodes(p);
    return 0;
}