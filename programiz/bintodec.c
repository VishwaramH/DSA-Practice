#include<stdio.h>
#include<math.h>
int bintodec(long long int bin) {
    int i=0,dec=0,rem;
    while(bin!=0) {
        rem = bin%10;       // calculates and stores the last digit in rem 
        bin = bin/10;       // removes the last digit and store the remaining digits in bin
        dec = dec + rem * pow(2,i);    // dec = 0 + 1*(2^0) .... dec = 1 + 1*(2^1)  (for eg: 111)
        i++;                           // increment the i value
    }
    return dec;
}
int main() {
    long long int bin;
    printf("Enter the binary number:\n");
    scanf("%lld",&bin);
    printf("Equivalent decimal value for %lld is: %d\n",bin,bintodec(bin));
    return 0;
}