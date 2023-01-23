// circular doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev; 
};

void insertAtPos(struct node *p, struct node *pnode) {
    pnode -> next = p;
    pnode -> prev = p -> prev;
    p -> prev = pnode;
    pnode -> prev -> next = pnode;
}

void deleteAtPos(struct node *p) {
    struct node *temp;
    temp = p -> prev;
    p -> prev = temp -> prev;
    temp -> prev -> next = p;
    temp -> next = NULL;
    temp -> prev = NULL;
    free(temp);
}

struct node* traverseLastNode(struct node *traverseNode, struct node *q) {
    while(traverseNode->next != q) {
        traverseNode = traverseNode -> next;
    }
    return traverseNode;
}

struct node* traverse(struct node *traverseNode, int pos) {
    for(int i=0; i<pos; i++) {
        traverseNode = traverseNode -> next;
    }
    return traverseNode;
}

struct node* createNode(int data) {
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
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

void printNodesReverse(struct node *p, struct node *q) {
    do {
        printf("%d\n", p->data);
        p=p->prev;
    } while(p->next != q);
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
       p->next->prev = p;
       p=p->next;
    }

    p-> next = q;
    q-> prev = p;

    // printing nodes in forward order
    p=q;
    printf("Forward...\n");
    printNodes(p, q);

    // insertion at given position
    pnode = createNode(80);
    p = q;
    printf("Enter a position to insert a node:\n");
    scanf("%d", &pos);
    p = traverse(p, pos);
    insertAtPos(p, pnode);
    p=q;
    printf("After inserting...\n");
    printNodes(p,q);

    // deletion at given position
    p = q;
    printf("Enter a position to delete a node:\n");
    scanf("%d", &pos1);
    p = traverse(p, pos1);
    deleteAtPos(p);
    p=q;
    printf("After deleting...\n");
    printNodes(p,q);

    // printing the nodes in reverse order
    p=traverseLastNode(p,q);
    printf("Reverse...\n");
    printNodesReverse(p, q);

    // printing nodes with given count
    p=q;
    printf("Enter the count:\n");
    scanf("%d", &count);
    printf("print with given count...\n");
    printCountNodes(p, q, count);

    return 0;
}