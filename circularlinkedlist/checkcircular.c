// checkcircular 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev; 
};

void checkList(struct node *p) {
    struct node *t2;
    int val = 1;
    t2=p;
    if(p->prev != NULL) {
        printf("\nCircular\n");
        val=0;
    }
    while(val) {
        t2 = t2 -> next -> next;
        p = p->next;
        if(t2 -> next == NULL) {
            printf("\nDoubly linked list\n");
            val = 0;
        }
        else if(p == t2) {
            printf("\nSub circular\n");
            val = 0;
        }
    }
}

struct node* createNode(int data) {
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void printNodes(struct node *p,  struct node *temp) {
    int count = 0;
    do {
        printf("%d\n", p->data);
        if(p==temp) {
            count++;
        }
        p=p->next;
    } while(p!=temp || count<1);
}

int main() {
    struct node *p, *q, *temp;
    int n, value;
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

    // printing subcircular linkedlist
    // p=q;
    // printNodes(p, temp);
    
    // checking the type of linkedlist
    // p=q;
    // checkList(p);


    return 0;
}