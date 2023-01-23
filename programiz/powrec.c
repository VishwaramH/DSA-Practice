#include<stdio.h>
int power(int base,int exp) {
    if(exp!=0) {
        return base*power(base,exp-1);
    }
    else {
        return 1;
    }
}
int main() {
    int base,exp;
    printf("Enter the values for base and exponent:\n");
    scanf("%d%d",&base,&exp);
    printf("%d^%d = %d\n",base,exp,power(base,exp));
}