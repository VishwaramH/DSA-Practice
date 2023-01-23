#include<stdio.h>

int main() 
{
    int n,pos,el,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the position to insert\n");
    scanf("%d",&pos);
    printf("Enter the element:\n");
    scanf("%d",&el);
    if(pos>n)
        printf("Invalid!!\n");
    
    else {
        printf("After inserting...\n");
        for(i=n-1;i>=pos-1;i--) {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = el;
    }
    for(i=0;i<=n;i++){
        printf("%d\t",arr[i]);
    }
}