#include<stdio.h>
#include<math.h>

int octtoDec(int oct) {
    int dec=0,rem,i=0;
    while(oct!=0) {
        rem = oct % 10;
        dec += rem*pow(8,i);
        oct = oct/10;
        i++;
    }
    return dec;
}
int main() {
    int oct;
    printf("Enter the octal value:\n");
    scanf("%d",&oct);
    printf("Equivalent decimal for %d is: %d\n",oct,octtoDec(oct));
    return 0;
}