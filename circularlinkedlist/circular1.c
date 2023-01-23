// circular singly linked list

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node* traverse(struct node *traverseNode, int pos) {
    for(int i=0; i<pos-1; i++) {
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

void printNodes(struct node *p,  struct node *q) {
    do {
        printf("%d\n", p->data);
        p=p->next;
    } while(p != q);
}

void printCountNodes(struct node *p,  struct node *q, int count) {
    if (count>0) {
        do {
            printf("%d\n", p->data);
            p=p->next;
        } while(p != q);
        printCountNodes(p, q, count-1);
    }
}

void deleteAtPos(struct node *list, int pos) {
    struct node *temp;
    for(int i=0;i<pos-2;i++) {
        list = list->next;
    }
    temp = list->next;
    list->next = list->next->next;
    free(temp);
}

int main() {
    struct node *p, *q, *pnode;
    int n, value, count, pos, pos1;
    printf("Enter the number of nodes:\n");
    scanf("%d", &n);  

    //Creating first node outside the loop.
    scanf("%d", &value);
    p = createNode(value);

    //Assigning first node to q so the after p moves to the last node while creation, q will be the starting node.
    q=p;
    //Creating remaining nodes
    for(int i=1;i<n;i++) {    
       scanf("%d", &value);
       p->next = createNode(value);
       p=p->next;
    }
    p->next = q;
    

    // printing the nodes
    p=q;
    printf("Circular singly linked list...\n");
    printNodes(p, q);
    p=q;
    
    
    // Insertion at given position
    pnode = createNode(100);
    printf("Enter a position to insert a node:\n");
    scanf("%d", &pos);
    p=q;
    p = traverse(p, pos);
    pnode -> next = p->next;
    p-> next = pnode;
    
    p=q;
    printf("\nAfter Inserting:\n");
    printNodes(p,q);
    p=q;
    
    // deletion at given position
    printf("Enter a position to delete a node:\n");    
    scanf("%d",&pos1);
    deleteAtPos(p,pos1);
    printf("After deleting:\n");
    printNodes(p,q);


    // printing nodes repeatedly
    p = q;
    printf("Enter the count:\n");
    scanf("%d", &count);

    printf("print with given count...\n");
    printCountNodes(p, q, count);

    return 0;
}

