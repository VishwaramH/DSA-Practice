#include<stdio.h>

int dectoOct(int dec) {
    int oct=0,rem,i=1;
    while(dec!=0) {
        rem = dec % 8;
        dec = dec / 8;
        oct += rem*i;
        i *= 10;
    }
    return oct;
}
int main() {
    int dec;
    printf("Enter the decimal value:\n");
    scanf("%d",&dec);
    printf("Equivalent octal value for %d is: %d\n",dec,dectoOct(dec));
    return 0;
}

