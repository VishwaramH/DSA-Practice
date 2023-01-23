#include<Stdio.h>
#include<stdlib.h>

struct link{
    int data;
    struct link *next;
};

void insertatPos(struct link *p,struct link *node,int pos) {
    for(int i=0;i<pos-1;i++) {
        p = p->next;
    }
    node->next = p->next;
    p->next = node;
}
void insertAtlast(struct link *p,struct link *t) {
    while(p->next!=NULL) {
        p = p->next;
    }
    p->next = t;
}

struct link* createNode(int value) {
    struct link *temp;
    temp = malloc(sizeof(struct link));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void printNodes(struct link *p) {
    while(p!=NULL) {
        printf("%d ",p->data);
        p = p->next;
    }
}

int main() {
    struct link *p,*q,*pnode,*pnode1,*pnode2;
    int num,value,pos;
    printf("Enter the number of nodes:\n");
    scanf("%d",&num);
    p = malloc(sizeof(struct link));
    printf("Enter the value of nodes:\n");
    scanf("%d",&(p->data));   // p => head of the linked list
    p->next = NULL;
    q = p;
    for(int i=1;i<num;i++) {
        scanf("%d",&value);
        p->next = createNode(value);
        p = p->next;
    }
    p=q;
    // insertion at beginning
    printf("Enter a node to insert at first:\n");
    scanf("%d",&value);
    pnode = createNode(value);
    pnode->next = p;  
    p = q = pnode;

    // insertion at last
    printf("Enter a node to insert at last:\n");
    scanf("%d",&value);
    pnode1 = createNode(value);
    insertAtlast(p,pnode1);
    p = q;
    printf("Enter a node and position to insert it:\n");
    scanf("%d%d",&value,&pos);
    pnode2 = createNode(value);
    insertatPos(p,pnode2,pos);
    p = q;
    printf("Linked list from head to tail:\n");
    printNodes(p);
}