#include<stdio.h>
#include<stdlib.h>

struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
    struct bst *root;
};

void insertion(struct bst *tr, int data, struct bst *root) {
    if(data <= tr->data) {
        if(tr->left!=NULL) {
            insertion(tr->left,data,root);
        }
        else{
            tr-> left = malloc(sizeof(struct bst));
            tr->left->data = data;
            tr->left->left = NULL;
            tr->left->right = NULL;
            tr->left->root = root;
        }
    }
    else {
        if(tr->right!=NULL) {
            insertion(tr->right,data,root);
        }
        else {
            tr-> right = malloc(sizeof(struct bst));
            tr->right->data = data;
            tr->right->left = NULL;
            tr->right->right = NULL;
            tr->right->root = root;
        }
    }
} 

void printTree(struct bst *tr) {
    if (tr!=NULL) {
        printf("%d\n",tr->data);
        printTree(tr->left);
        printTree(tr->right);
    }
}

int leftSum(struct bst *tr) {
    if(tr!=NULL) {
        if(tr->left!=NULL) {
            return tr->left->data + leftSum(tr->left);
        }
        else if(tr->right!=NULL) {
            return tr->right->data + leftSum(tr->right);
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
}

int rightSum(struct bst *tr) {
    if(tr!=NULL) {
        if((tr->right!=NULL)) {
            return  tr->right->data + rightSum(tr->right);
        }
        else if(tr->left!=NULL) {
            return tr->left->data + rightSum(tr->left);
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
}

int main() {
    int arr[] = {2,1,3,8,6,9,11}, len=7, l, r;
    struct bst *tree, *q;
    tree = malloc(sizeof(struct bst));
    tree -> data = 5;
    tree -> left = NULL;
    tree -> right = NULL;
    tree -> root = tree;
    q=tree;

    for(int i=0;i<len;i++) {
        insertion(q,arr[i],q);
    }
    printTree(q);
    l = leftSum(q);
    r = rightSum(q);
    printf("left sum\t%d", l);
    printf("right sum\t%d", r);
    return 0;
}