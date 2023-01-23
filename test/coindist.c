// CODEVITA (2019)
#include<stdio.h>
int main() {
    int value,one,two,five;
    scanf("%d",&value);
     // to find the number of 5 rupee coins
     five = (value-4)/5;

     // to find the number of 1 rupee coins
     if((value-5*five)%2==0) {
         one = 2;
    }
    else {
        one = 1;
    }

    // to find the number of 2 rupee coins
    two = (value-5*five-1*one)/2;

    // printing values
    printf("%d %d %d %d",(five+one+two),five,two,one);
    return 0;
}