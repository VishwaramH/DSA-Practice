// to find array type(odd,even,mixed)

#include<stdio.h>

int main() {
    int num, odd=0,even=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++) {
        if(arr[i]%2==0) {
            even++;
        }
        if(arr[i]%2!=0) {
            odd++;
        }
    }
    if(even==num) {
        printf("Even elements\n");
    }
    else if(odd==num) {
        printf("Odd elements\n");
    }
    else {
        printf("Mixed elements\n");
    }
    return 0;
}