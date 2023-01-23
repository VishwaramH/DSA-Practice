#include<stdio.h>

long long int dectobin(int dec) {
    long long int bin=0;
    int i=1,rem,step=1;
    while(dec!=0) {
        rem = dec % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, dec, rem, dec / 2);
        dec = dec/2;
        bin = bin + rem*i;
        i = i*10;
    }
    return bin;
}

int main() {
    int dec;
    printf("Enter the decimal number:\n");
    scanf("%d",&dec);
    printf("Equivalent binary no for %d is: %lld\n",dec,dectobin(dec));
    return 0;
}