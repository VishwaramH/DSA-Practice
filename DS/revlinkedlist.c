#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node* createNode(int data) {
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void printNodes(struct node *p) {
    while(p!=NULL) {
        printf("%d ",p->data);
        p = p->next;
    }
}

struct node *traverseLast(struct node *p) {
    while(p->next!=NULL) {
        p = p->next;
    }
    return p;
}

struct node *reverse(struct node *src,struct node *dest) {
    if(src->next!=NULL) {
        struct node *init;
        init = src;
        while(src->next->next!=NULL) {
            src = src->next;
        }
        dest -> next = src;
        src->next  = NULL;
        return reverse(init,dest->next);
    }
    else {
        return src;
    }
}

struct node *findmid(struct node *p, struct node *mid) {
    if(p->next==NULL || p->next->next==NULL) {
        return mid;
    }
    else {
        return findmid(p->next->next,mid->next);
    }
}

int main()
{
    struct node *p,*q,*last,*new,*mid;
    int num,value;
    scanf("%d",&num);
    p = malloc(sizeof(struct node));
    scanf("%d",&p->data);
    p->next = NULL;
    q = p;
    for(int i=1;i<num;i++) {
        scanf("%d",&value);
        p->next = createNode(value);
        p = p->next;
    }
    p = q;
    printf("Linked list:\t");
    printNodes(p);
    p = q;
    last = traverseLast(p);
    printf("\nAfter reversing..\t");
    new = last;
    last = reverse(p,last);
    p = q = new;
    printNodes(p);
    p = mid = q;
    mid = findmid(p,mid);
    printf("\nMiddle node: %d",mid->data);
    return 0;
}