#include<stdio.h>
#include<math.h>

int isPerfectSquare(int num) {
    int iVar;
    float fVar;
    fVar = sqrt((double)num);
    iVar = fVar;
    if(iVar==fVar) {
        return num;
    }
    else {
        return 0;
    }
}

int main() {
    int num, sum=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++) {
        sum = sum + isPerfectSquare(arr[i]);
    }
    printf("%d",sum);
    return 0;
}

// reference for isPerfectSquare function
// #include<stdio.h>
// #include<math.h>
// void main() {
//     int num;
//     scanf("%d",&num);
//     int ivar;
//     float fvar;
//     fvar = sqrt((double)num);
//     ivar = fvar;
//     printf("%d",ivar==fvar);
//     printf("\n....%d....",ivar);
//     printf("\n....%f....",fvar);
// }