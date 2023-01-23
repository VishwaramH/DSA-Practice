#include<stdio.h>
#include<math.h>
// no direct way to find binary to octal conversion

int bintoOct(long long int bin) {
    int dec=0,rem,i=0;
    // 1st => converting binary to decimal
    while(bin!=0) {
        rem = bin % 10;
        dec += rem*pow(2,i);
        i++;
        bin /= 10;
    }
    // 2nd => comverting decimal to octal
    i = 1;
    int oct = 0;
    while(dec!=0) {
        rem = dec % 10;
        oct += rem * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

int main() {
    long long int bin;
    printf("Enter the binary value:\n");
    scanf("%lli",&bin);
    printf("Equivalent octal value for %lli is: %d\n",bin,bintoOct(bin));
    return 0;
}