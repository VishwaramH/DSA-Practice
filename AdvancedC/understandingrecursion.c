#include<stdio.h>
int fun(int a) {
    if(a>0){
        fun(a-1); // 3-1 // 2-1 // 1-1 // 0
        printf("%d ",a); // executes from top of the call stack to bottom of the call stack
    }
}
// the activation area is created for each function call 
// 1)creation of activation area=> calling phase or ascending phase
// 2)deletion of activation area after executing the remaining statements from top to bottom =>returning phase or descending phase
// statements before recursive call => executed in ascending phase
// statements after recursive call => executed in descending phase
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    fun(num);
    return 0;
}