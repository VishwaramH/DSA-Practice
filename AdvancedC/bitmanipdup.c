// finding the duplicate characters in a string using bit manipulation
// time complexity => O(n) // space complexity => O(1) // most efficient method 
#include<stdio.h>
void bitduplicate(char str[]) {
    int x=0,y,i,k;
    for(i=0;str[i]!='\0';i++) {
        y = 1;
        k = str[i] - 97;
        y = y << k;         // left shift upto the bit where we need to increase the count of a character
        if((x&y)==y) {      // (x&y) => masking (checking whether the bit is already 1 and if it is 1,then it is a duplicate)
            printf("%c is a duplicate character\n",str[i]);
        }
        else {
            x = x|y;        // (x|y) => merging (changing on to off(1 to 0) and off to on(0 to 1))
        }
    }
}

int main() {
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    bitduplicate(str);
    return 0;
}