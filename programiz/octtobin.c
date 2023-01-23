#include<stdio.h>
#include<math.h>
// no direct way to convert octal to binary
long long int octtoBin(int oct) {
    int dec=0,rem,i=0;
    // 1st => converting octal to decimal
    while(oct!=0) {
        rem = oct % 10;
        dec += rem*pow(8,i);
        oct /= 10;
        i++;
    }
    long long int bin = 0;
    i = 1;
    // 2nd => converting decimal to binary
    while(dec!=0) {
        rem = dec % 2;
        bin += rem*i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}

int main() {
    int oct;
    printf("Enter the octal value:\n");
    scanf("%d",&oct);
    printf("Equivalent value for %d is: %lli\n",oct,octtoBin(oct));
    return 0;
}